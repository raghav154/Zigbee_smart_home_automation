
/*
#undef UNICODE

#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>
#include <Windows.h>
#include <conio.h>
#include <string.h>
#define PORT 23

#pragma comment(lib, "Ws2_32.lib")
// link with Ws2_32.lib
//
//typedef struct addrinfo {
//  int             ai_flags;
//  int             ai_family;
//  int             ai_socktype;
//  int             ai_protocol;
//  size_t          ai_addrlen;
//  char            *ai_canonname;
//  struct sockaddr *ai_addr;
//  struct addrinfo *ai_next;
//} ADDRINFOA, *PADDRINFOA;

int __cdecl main(int argc, char **argv)
{

    //-----------------------------------------
    // Declare and initialize variables
    WSADATA wsaData;
    int iResult;
    INT iRetval;
	SOCKET ListeningSocket,NewConnection;
	SOCKADDR_IN ServerAddr, SenderInfo;
    DWORD dwRetval;

    int i = 1;
    
    struct addrinfo *result = NULL;
    struct addrinfo *ptr = NULL;
    struct addrinfo hints;

    struct sockaddr_in  *sockaddr_ipv4;
//    struct sockaddr_in6 *sockaddr_ipv6;
    LPSOCKADDR sockaddr_ip;

    char ipstringbuffer[46];
    DWORD ipbufferlength = 46;

    // Validate the parameters
    //if (argc != 3) {
    //    printf("usage: %s <hostname> <servicename>\n", argv[0]);
    //    printf("getaddrinfo provides protocol-independent translation\n");
    //    printf("   from an ANSI host name to an IP address\n");
    //    printf("%s example usage\n", argv[0]);
    //    printf("   %s www.contoso.com 0\n", argv[0]);
    //    return 1;
    //}

    // Initialize Winsock
    iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
    if (iResult != 0) {
        printf("WSAStartup failed: %d\n", iResult);
        return 1;
    }

    //--------------------------------
    // Setup the hints address info structure
    // which is passed to the getaddrinfo() function
    ZeroMemory( &hints, sizeof(hints) );
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_protocol = IPPROTO_TCP;

	argv[1] = "192.168.1.2";
	argv[2] = "23";
    printf("Calling getaddrinfo with following parameters:\n");
    printf("\tnodename = %s\n", argv[1]);
    printf("\tservname (or port) = %s\n\n", argv[2]);
    
//--------------------------------
// Call getaddrinfo(). If the call succeeds,
// the result variable will hold a linked list
// of addrinfo structures containing response
// information
    dwRetval = GetAddrInfo(argv[1], argv[2], &hints, &result);
    if ( dwRetval != 0 ) {
        printf("getaddrinfo failed with error: %d\n", dwRetval);
        WSACleanup();
        return 1;
    }

    printf("getaddrinfo returned success\n");
    
    // Retrieve each address and print out the hex bytes
    for(ptr=result; ptr != NULL ;ptr=ptr->ai_next) {

        printf("getaddrinfo response %d\n", i++);
        printf("\tFlags: 0x%x\n", ptr->ai_flags);
        printf("\tFamily: ");
        switch (ptr->ai_family) {
            case AF_UNSPEC:
                printf("Unspecified\n");
                break;
            case AF_INET:
                printf("AF_INET (IPv4)\n");
                sockaddr_ipv4 = (struct sockaddr_in *) ptr->ai_addr;
                printf("\tIPv4 address %s\n",
                    inet_ntoa(sockaddr_ipv4->sin_addr) );
                break;
            case AF_INET6:
                printf("AF_INET6 (IPv6)\n");
                // the InetNtop function is available on Windows Vista and later
                // sockaddr_ipv6 = (struct sockaddr_in6 *) ptr->ai_addr;
                // printf("\tIPv6 address %s\n",
                //    InetNtop(AF_INET6, &sockaddr_ipv6->sin6_addr, ipstringbuffer, 46) );
                
                // We use WSAAddressToString since it is supported on Windows XP and later
                sockaddr_ip = (LPSOCKADDR) ptr->ai_addr;
                // The buffer length is changed by each call to WSAAddresstoString
                // So we need to set it for each iteration through the loop for safety
                ipbufferlength = 46;
                iRetval = WSAAddressToString(sockaddr_ip, (DWORD) ptr->ai_addrlen, NULL, 
                    ipstringbuffer, &ipbufferlength );
                if (iRetval)
                    printf("WSAAddressToString failed with %u\n", WSAGetLastError() );
                else    
                    printf("\tIPv6 address %s\n", ipstringbuffer);
                break;
            case AF_NETBIOS:
                printf("AF_NETBIOS (NetBIOS)\n");
                break;
            default:
                printf("Other %ld\n", ptr->ai_family);
                break;
        }
        printf("\tSocket type: ");
        switch (ptr->ai_socktype) {
            case 0:
                printf("Unspecified\n");
                break;
            case SOCK_STREAM:
                printf("SOCK_STREAM (stream)\n");
                break;
            case SOCK_DGRAM:
                printf("SOCK_DGRAM (datagram) \n");
                break;
            case SOCK_RAW:
                printf("SOCK_RAW (raw) \n");
                break;
            case SOCK_RDM:
                printf("SOCK_RDM (reliable message datagram)\n");
                break;
            case SOCK_SEQPACKET:
                printf("SOCK_SEQPACKET (pseudo-stream packet)\n");
                break;
            default:
                printf("Other %ld\n", ptr->ai_socktype);
                break;
        }
        printf("\tProtocol: ");
        switch (ptr->ai_protocol) {
            case 0:
                printf("Unspecified\n");
                break;
            case IPPROTO_TCP:
                printf("IPPROTO_TCP (TCP)\n");
                break;
            case IPPROTO_UDP:
                printf("IPPROTO_UDP (UDP) \n");
                break;
            default:
                printf("Other %ld\n", ptr->ai_protocol);
                break;
        }
        printf("\tLength of this sockaddr: %d\n", ptr->ai_addrlen);
        printf("\tCanonical name: %s\n", ptr->ai_canonname);
    }
	ListeningSocket = socket(sockaddr_ipv4->socktype, SOCK_STREAM, IPPROTO_TCP);
 
     // Check for errors to ensure that the socket is a valid socket.
     if (ListeningSocket == INVALID_SOCKET)
     {
          printf("Server: Error at socket(), error code: %ld.\n", WSAGetLastError());
          // Clean up
          WSACleanup();
          // and exit with error
          return 1;
     }
	sockaddr_ipv4->sin_family = AF_INET;
    sockaddr_ipv4->sin_addr.s_addr = inet_addr(argv[1]);
    sockaddr_ipv4->sin_port = htons(PORT);

    //----------------------
    // Connect to server.
    iResult = connect( ListeningSocket, (SOCKADDR*) &hints,sizeof(hints));
    if (iResult == SOCKET_ERROR) {
        wprintf(L"connect failed with error: %d\n", WSAGetLastError() );
        closesocket(ListeningSocket);
        WSACleanup();
		getch();
        return 1;
  }
	if (bind(ListeningSocket, (SOCKADDR *)&sockaddr_ipv4, sizeof(sockaddr_ipv4)) == SOCKET_ERROR)
     {
          printf("Server: bind() failed! Error code: %ld.\n", WSAGetLastError());
          // Close the socket
          closesocket(ListeningSocket);
          // Do the clean up
          WSACleanup();
          // and exit with error
		  getch();
          return 1;
     }
     else
          printf("Server: bind() is OK!\n");
 
     // Listen for client connections with a backlog of 5
     if (listen(ListeningSocket, 5) == SOCKET_ERROR)
     {
          printf("Server: listen(): Error listening on socket %ld.\n", WSAGetLastError());
          // Close the socket
          closesocket(ListeningSocket);
          // Do the clean up
          WSACleanup();
          // Exit with error
		  getch();
          return 1;
     }
     else
          printf("Server: listen() is OK, I'm listening for connections...\n");
 
     // Set 10 seconds 10 useconds timeout
    

    freeaddrinfo(result);
    WSACleanup();
	getch();
    return 0;
}
*/