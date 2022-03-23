#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/socket.h>
#include <sys/types.h>

#include <netinet/in.h>

int main()
{
    // open a file to serve ======================================
    FILE *htmlData = NULL;
    htmlData = fopen("index.html", "r");

    char responseData[1024];
    fgets(responseData, 1024, htmlData);

    char httpHeader[2048] = "HTTP/1.1 200 OK\r\n\n";
    strcat(httpHeader, responseData);

    // create a socket ===========================================
    int serverSocket = 0;
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);

    // define the address ========================================
    struct sockaddr_in serverAddress;
    serverAddress.sin_family = AF_INET;
    serverAddress.sin_port = htons(8001);
    //serverAddress.sin_addr.s_addr = INADDR_ANY;

    bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress));

    listen(serverSocket, 5);

    int clientSocket = 0;

    while (1)
    {
        clientSocket = accept(serverSocket, NULL, NULL);
        send(clientSocket, httpHeader, sizeof(httpHeader), 0);
        close(clientSocket);
    }

    return 0;
}