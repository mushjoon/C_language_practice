#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

const int PORTNUM = 1234;

void do_yo(int sock);

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

    char buf[1000];
    // strcpy(buf, "Got it!\n");

    // send(sock, buf, strlen(buf), 0);

    // send greeting ============================================
    strcpy(buf, "250 yo, hello\n");
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
    }
}