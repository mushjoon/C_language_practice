#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif

#include <winsock2.h>
#include <windows.h>
#include <ws2tcpip.h>
#include <iphlpapi.h>
#include <stdio.h>

#pragma comment(lib, "ws2_32.lib")

#define BUFLEN 512
#define PORT 27015
#define ADDRESS "127.0.0.1" // aka "localhost"

int main()
{
    printf("Hello world!\n");

    int res;

    // INITIALIZATION ==============================================
    WSADATA wsaData; // configuration data
    res = WSAStartup(MAKEWORD(2, 2), &wsaData);

    if (res)
    {
        printf("Startup failed: %d\n", res);
        return 1;
    }

    // ==============================================================

    // SETUP SERVER =================================================
    
    // construct a socket
    SOCKET listener;
    listener = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

    if (listener == INVALID_SOCKET)
    {
        printf("Error with construction: %d\n", WSAGetLastError());
        WSACleanup();
        return 1;
    }
    
    // bind to address
    


    // CLEAN UP =====================================================
    res = WSACleanup();
    if (res)
    {
        printf("Cleanup failed: %d\n", res);
        return 1;
    }

    // ==============================================================

    return 0;
}
