/*#ifndef UNICODE
#define UNICODE
#endif

#include <winsock2.h>
#include <Ws2tcpip.h>
#include <stdio.h>
#include <conio.h>

// Link with ws2_32.lib
#pragma comment(lib, "Ws2_32.lib")

#define DEFAULT_BUFLEN 512
#define DEFAULT_PORT 23
int iResult;
    WSADATA wsaData;
	SOCKET ConnectSocket = INVALID_SOCKET;
    struct sockaddr_in clientService; 
	int recvbuflen = DEFAULT_BUFLEN,ch;
    char *sendbuf = "Device", *login="manager\n", *password="manager\n", *sendbuf1="device\n", *sendbuf2="poe?\n";
	char *sendbuf3="poe port=4 status=disable\n", *sendbuf4="poe port=4 status=enable\n";
	char recvbuf[DEFAULT_BUFLEN]="";
void SWITCH_ON()
{
				iResult = send( ConnectSocket, sendbuf4, (int)strlen(sendbuf3), 0 );
				Sleep(500);
				iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);
					
}
void SWITCH_OFF()
{
				iResult = send( ConnectSocket, sendbuf3, (int)strlen(sendbuf3), 0 );
				Sleep(500);
				iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);
					
}
void choice1()
{
	char cl='y',ch='\0';
	if(cl=='y'||cl=='Y')
	{
	
	printf("\n\nEnter your choice \n");
	printf("\n1-SWITCH ON \n");
	printf("\n2-SWITCH OFF \n");
	printf("\n3-EXIT\n\n\n");
	scanf("%c",&ch);

	switch (ch)
	{
		case '1':
			{
				system("cls");
				SWITCH_ON();
			}
			break;
		case '2':
			{
				system("cls");
				SWITCH_OFF();
			}
			break;
		case '3':exit(0);
		default:system("cls");
			break;
	}
	getch();
	choice1();
	}
}
	


int main1() {

    //----------------------
    // Declare and initialize variables.
    
    //----------------------
    // Initialize Winsock
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
    if (iResult != NO_ERROR) {
        wprintf(L"WSAStartup failed with error: %d\n", iResult);
        
		getch();return 1;
    }

    //----------------------
    // Create a SOCKET for connecting to server
    ConnectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (ConnectSocket == INVALID_SOCKET) {
        wprintf(L"socket failed with error: %ld\n", WSAGetLastError());
        WSACleanup();
        
		getch();return 1;
    }

    //----------------------
    // The sockaddr_in structure specifies the address family,
    // IP address, and port of the server to be connected to.
    clientService.sin_family = AF_INET;
    clientService.sin_addr.s_addr = inet_addr( "192.168.1.2" );
    clientService.sin_port = htons( DEFAULT_PORT );

    //----------------------
    // Connect to server.
    iResult = connect( ConnectSocket, (SOCKADDR*) &clientService, sizeof(clientService) );
    if (iResult == SOCKET_ERROR) 
		{
        wprintf(L"connect failed with error: %d\n", WSAGetLastError() );
        closesocket(ConnectSocket);
        WSACleanup();
        getch();
		return 1;
		}
	//----------------------
    // Send an initial buffer
    iResult = send( ConnectSocket, sendbuf, (int)strlen(sendbuf), 0 );
    if (iResult == SOCKET_ERROR) 
	{
        wprintf(L"send failed with error: %d\n", WSAGetLastError());
        closesocket(ConnectSocket);
        WSACleanup();
        exit(0);
	}
    // Receive until the peer closes the connection   
   	if ( iResult >0 )
		{		iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				Sleep(1000);
				printf("Bytes received: %d\n", iResult);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);
				//sending next buffer
				iResult = send( ConnectSocket, login, (int)strlen(login), 0 );
				Sleep(500);
				iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);
				iResult = send( ConnectSocket, password, (int)strlen(password), 0 );
				Sleep(500);
				iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);
				iResult = send( ConnectSocket, sendbuf1, (int)strlen(sendbuf1), 0 );
				Sleep(500);
				iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);
				iResult = send( ConnectSocket, sendbuf2, (int)strlen(sendbuf2), 0 );
				Sleep(500);
				iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);
				choice1();
				getch();
		}
        
	// shutdown the connection since no more data will be sent
    iResult = shutdown(ConnectSocket, SD_SEND);
    if (iResult == SOCKET_ERROR) {
        wprintf(L"shutdown failed with error: %d\n", WSAGetLastError());
        closesocket(ConnectSocket);
        WSACleanup();
        
		getch();return 1;
    }
	//printf("\n%s\n",recvbuf);
	//close socket
	getch();
    iResult = closesocket(ConnectSocket);
    if (iResult == SOCKET_ERROR) {
        wprintf(L"close failed with error: %d\n", WSAGetLastError());
        WSACleanup();
        return 1;
    }

    WSACleanup();
	return 0;
}

*/