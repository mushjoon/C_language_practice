#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <sqlite3.h>

const int PORTNUM = 1234;

void do_yo(int sock);
void complain(int sock);

int main(int argc, char const *argv[])
{
    // create a socket =========================================
    int sockfd, newSockfd;
    struct sockaddr_in serv_addr, client_addr;

    sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0)
    {
        perror("Can't open socket\n");
        exit(1);
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORTNUM);
    serv_addr.sin_addr.s_addr = INADDR_ANY;

    // bind to socket ===========================================
    int res = bind(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
    if (res < 0)
    {
        perror("Can't bind to socket.\n");
        exit(1);
    }

    // listen for connection ====================================
    listen(sockfd, 5); // pause the program and wait for the connection to come in. 5 means how many outstanding connection it will allow. 5 other guys are waiting in que

    // accept connection ========================================
    int client_len = sizeof(client_addr);
    newSockfd = accept(sockfd, (struct sockaddr *)&client_addr, (socklen_t *)&client_len);

    // hand off to function =====================================
    do_yo(newSockfd);
    close(newSockfd);
    close(sockfd);

    return 0;
}

void do_yo(int sock)
{
    const int NOT_AUTH = 0;
    const int LOGGED_IN = 1;

    char buf[1000];
    char username[50];
    // strcpy(buf, "Got it!\n");

    // send(sock, buf, strlen(buf), 0);

    // OPEN CONNECTION TO DB ==========================================
    sqlite3 *db;

    if (sqlite3_open("yo.db", &db) < 0)
    {
        printf("Can't open database\n");
        exit(1);
    }

    // send greeting ==================================================
    strcpy(buf, "SERVER>>> 250 yo, hello\n");
    send(sock, buf, strlen(buf), 0);

    int state = NOT_AUTH;

    while (1)
    {
        // wait for input from user =================================
        recv(sock, buf, 1000, 0);

        if (!strncmp("NOYO", buf, 4))
        {
            close(sock);
            return;
        }
        else if (!strncmp("MEIS", buf, 4))
        {
            
            sscanf(buf + 5, "%s", username);
            printf("User is %s\n", username);

            // ENTER USERNAME INTO DB
            char query[1000];
            sqlite3_stmt *stmt;

            // FYI THIS IS NOT A GOOD WAY OF DOING IT
            sprintf(query, "insert or replace into users (uname) values ('%s')", username);
            sqlite3_prepare_v2(db, query, strlen(query), &stmt, NULL);
            sqlite3_step(stmt);

            // SEND BACK CONFIRMATION
            strcpy(buf, "SERVER>>> 200 LOGIN OK\n");
            send(sock, buf, strlen(buf), 0);
            state = LOGGED_IN;
        }
        else if (!strncmp("YOSR", buf, 4))
        {
            if (!state)
            {
                complain(sock);
                continue;
            }

            // LIST ALL USERS
            strcpy(buf, "SERVER>>> 300 All users\n");
            send(sock, buf, strlen(buf), 0);

            // QUERY DATABASE FOR ALL USERS
            sqlite3_stmt *stmt;
            char *query = "select uname from users order by uname";
            sqlite3_prepare_v2(db, query, strlen(query), &stmt, NULL);


            // DISPLAY LIST TO CLIENT
            //char *uname;
            while (sqlite3_step(stmt) != SQLITE_DONE)
            {
                sprintf(buf, "%s\n", (char *)sqlite3_column_text(stmt, 0));
                send(sock, buf, strlen(buf), 0);
            }
            
            // SEND "."
            strcpy(buf, ".\n");
            send(sock, buf, strlen(buf), 0);

        }
        else if (!strncmp("YOYO", buf, 4))
        {
            if (!state)
            {
                complain(sock);
                continue;
            }
            // QUEUE YO FOR SOMEONE
            char query[1000];
            char to[995];
            sqlite3_stmt *stmt;

            sscanf(buf + 5, "%s ", to);
            sprintf(query, "insert into yos(yofrom, yoto) values ('%s', '%s')", username, to);
            sqlite3_prepare_v2(db, query, strlen(query), &stmt, NULL);
            sqlite3_step(stmt);

            strcpy(buf, "SERVER>>> 200 Yo queued\n");
            send(sock, buf, strlen(buf), 0);
        }
        else if (!strncmp("YOLO", buf, 4))
        {
            if (!state)
            {
                complain(sock);
                continue;
            }
            // COLLECT YOS FOR ME
            strcpy(buf, "SERVER>>> 300 Here are all your yos\n");
            send(sock, buf, strlen(buf), 0);

            // QUERY DATABASE FOR ALL USERS
            sqlite3_stmt *stmt;
            char query[1000];
            sprintf(query, "select yofrom from yos where yoto='%s' order by id", username);
            sqlite3_prepare_v2(db, query, strlen(query), &stmt, NULL);


            // DISPLAY LIST TO CLIENT
            //char *uname;
            while (sqlite3_step(stmt) != SQLITE_DONE)
            {
                sprintf(buf, "%s\n", (char *)sqlite3_column_text(stmt, 0));
                send(sock, buf, strlen(buf), 0);
            }
            
            // SEND "."
            strcpy(buf, ".\n");
            send(sock, buf, strlen(buf), 0);
        }
        else
        {
            strcpy(buf, "SERVER>>> 500 COMMAND NOT RECOGNIZED\n");
            send(sock, buf, strlen(buf), 0);
        }
    }
}

void complain(int sock)
{
    char buf[1000];
    strcpy(buf, "500 NOT LOGGED IN\n");
    send(sock, buf, strlen(buf), 0);
}