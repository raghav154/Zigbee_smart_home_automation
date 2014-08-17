#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <comdef.h>
#include <time.h>
#include <Winsock2.h>
#include <Windows.h>

#define SCK_VERSION1            0x0101
#define SCK_VERSION2            0x0202

int PASCAL WSAStartup(WORD,LPWSADATA);
int PASCAL WSACleanup(void);

//This typedef will be filled out when the function returns

//with information about the Winsock version


typedef struct WSAData
{
    WORD      wVersion;
    WORD      wHighVersion;
    char      szDescription[WSADESCRIPTION_LEN+1];
    char      szSystemStatus[WSASYS_STATUS_LEN+1];
    unsigned short      iMaxSockets;
    unsigned short      iMaxUdpDg;
    char *       lpVendorInfo;
} 
WSADATA;

typedef WSADATA *LPWSADATA;
//There are many more options than the ones defined here, to see them

//browse the winsock2.h header file


#define SOCK_STREAM      1
#define SOCK_DGRAM      2
#define SOCK_RAW      3

#define AF_INET      2 

#define IPPROTO_TCP      6

SOCKET PASCAL socket(int,int,int);
int PASCAL closesocket(SOCKET);

//connecting
struct sockaddr_in 
{
      short      sin_family;
      u_short      sin_port;
      struct      in_addr sin_addr;
      char      sin_zero[8];
};
 
int PASCAL connect(SOCKET,const struct sockaddr*,int);

//CONNECT TO REMOTE HOST (CLIENT APPLICATION)

//Include the needed header files.

//Don't forget to link libws2_32.a to your program as well


SOCKET s; //Socket handle


//CONNECTTOHOST � Connects to a remote host

bool ConnectToHost(int PortNo, char* IPAddress)
{
    //Start up Winsock�

    WSADATA wsadata;

    int error = WSAStartup(0x0202, &wsadata);

    //Did something happen?

    if (error)
        return false;

    //Did we get the right Winsock version?

    if (wsadata.wVersion != 0x0202)
    {
        WSACleanup(); //Clean up Winsock

        return false;
    }

    //Fill out the information needed to initialize a socket�

    SOCKADDR_IN target; //Socket address information


    target.sin_family = AF_INET; // address family Internet

    target.sin_port = htons (23); //Port to connect on

    target.sin_addr.s_addr = inet_addr ("192.168.1.2"); //Target IP


    s = socket (AF_INET, SOCK_STREAM, IPPROTO_TCP); //Create socket

    if (s == INVALID_SOCKET)
    {
        return false; //Couldn't create the socket

    }  

    //Try connecting...


    if (connect(s, (SOCKADDR *)&target, sizeof(target)) == SOCKET_ERROR)
    {
        return false; //Couldn't connect

    }
    else
        return true; //Success

}

//CLOSECONNECTION � shuts down the socket and closes any connection on it

void CloseConnection ()
{
    //Close the socket if it exists

    if (s)
        closesocket(s);

    WSACleanup(); //Clean up Winsock

}
int PASCAL bind(SOCKET,const struct sockaddr*,int); //bind to a socket

int PASCAL listen(SOCKET,int); //Listen for an incoming connection


//Accept a connection request

SOCKET PASCAL accept(SOCKET,struct sockaddr*,int*);
SOCKET s;
WSADATA w;

//LISTENONPORT � Listens on a specified port for incoming connections 

//or data

int ListenOnPort(int portno)
{
    int error = WSAStartup (0x0202, &w);   // Fill in WSA info


    if (error)
    {
        return false; //For some reason we couldn't start Winsock

    }

    if (w.wVersion != 0x0202) //Wrong Winsock version?

    {
        WSACleanup ();
        return false;
    }

    SOCKADDR_IN addr; // The address structure for a TCP socket


    addr.sin_family = AF_INET;      // Address family

    addr.sin_port = htons (portno);   // Assign port to this socket


    //Accept a connection from any IP using INADDR_ANY

    //You could pass inet_addr("0.0.0.0") instead to accomplish the 

    //same thing. If you want only to watch for a connection from a 

    //specific IP, specify that //instead.

    addr.sin_addr.s_addr = htonl (INADDR_ANY);  

    s = socket (AF_INET, SOCK_STREAM, IPPROTO_TCP); // Create socket


    if (s == INVALID_SOCKET)
    {
        return false; //Don't continue if we couldn't create a //socket!!

    }

    if (bind(s, (LPSOCKADDR)&addr, sizeof(addr)) == SOCKET_ERROR)
    {
       //We couldn't bind (this will happen if you try to bind to the same  

       //socket more than once)

        return false;
    }

    //Now we can start listening (allowing as many connections as possible to  

    //be made at the same time using SOMAXCONN). You could specify any 

    //integer value equal to or lesser than SOMAXCONN instead for custom 

    //purposes). The function will not //return until a connection request is 

    //made

    listen(s, SOMAXCONN);

    //Don't forget to clean up with CloseConnection()!

}
#define MY_MESSAGE_NOTIFICATION      1048 //Custom notification message


//This is our message handler/window procedure

LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message) //handle the messages

    {
    case MY_MESSAGE_NOTIFICATION: //Is a message being sent?

        {
            switch (lParam) //If so, which one is it?

            {
            case FD_ACCEPT:
                //Connection request was made

                break;

            case FD_CONNECT:
                //Connection was made successfully

                break;

            case FD_READ:
                //Incoming data; get ready to receive

                break;

            case FD_CLOSE:
                //Lost the connection

                break;
            }
        }
        break;

        //Other normal window messages here�


    default: //The message doesn't concern us

        return DefWindowProc(hwnd, message, wParam, lParam);
    }
}
//The socket has been created
//Switch the socket to a non-blocking asynchronous one


//IP address has been bound


//Function listen() has just been called� 


//Set the socket to non-blocking asynchronous mode

//�hwnd is a valid handle to the program's parent window

//Make sure you OR all the needed flags

