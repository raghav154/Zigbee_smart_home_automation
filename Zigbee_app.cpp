
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
#include <time.h>
#ifndef UNICODE
#define UNICODE
#endif

#include <winsock2.h>
#include <Ws2tcpip.h>

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

FILE *data=fopen("C:\\Users\\user\\Desktop\\Mydata.dat","w");


FILE *gnuplotPipe;
 

unsigned char buff_read[20][50]=
{
	{0x7E,0x00,0x04,0x08,0x01,0x4E,0x44,0x64,0x0D,0x0A}, // Node Discovery

	{0x7E,0x00,0x10,0x17,0x05,0x00,0x13,0xA2,0x00,0x40,0x5D,0X64,0XFC,0XFF,0XFE,0X02,0X44,0X30,0X05,0XB9,0x0D,0x0A}, // DIGITAL IO0 ON (LED_ON)
	
	{0x7E,0x00,0x10,0x17,0x05,0x00,0x13,0xA2,0x00,0x40,0x5D,0X64,0XFC,0XFF,0XFE,0X02,0X44,0X30,0X04,0XBA,0x0D,0x0A}, // DIGITAL IO0 OFF (LED_OFF)

	{0x7E,0x00,0x10,0x17,0x05,0x00,0x13,0xA2,0x00,0x40,0x5D,0X64,0XFC,0XFF,0XFE,0X02,0X44,0X31,0X05,0XB8,0x0D,0x0A}, // DIGITAL IO1 ON (LED_ON)
	
	{0x7E,0x00,0x10,0x17,0x05,0x00,0x13,0xA2,0x00,0x40,0x5D,0X64,0XFC,0XFF,0XFE,0X02,0X44,0X31,0X04,0XB9,0x0D,0x0A}, // DIGITAL IO1 OFF (LED_OFF)
	
	{0x7E,0x00,0x10,0x17,0x05,0x00,0x13,0xA2,0x00,0x40,0x5D,0X64,0XFC,0XFF,0XFE,0X02,0X44,0X33,0X02,0XB9,0x0D,0x0A}, // CONFIGURING AS A/D IO1 AS ANALOG INPUT 
	
	{0x7E,0x00,0x0F,0x17,0x05,0x00,0x13,0xA2,0x00,0x40,0x5D,0X64,0XFC,0XFF,0XFE,0X02,0X49,0X53,0X96,0x0D,0x0A}, // ANALOG SENSING (V,I)

	{0x7E,0x00,0x11,0x17,0x05,0x00,0x13,0xA2,0x00,0x40,0x5D,0X64,0XFC,0XFF,0XFE,0X02,0X49,0X52,0X01,0XF4,0XA2,0x0D,0x0A}, // PERIODIC SAMPLING WITH SAMPLING RATE OF 10 SEC 

	{0x7E,0x00,0x11,0x17,0x05,0x00,0x13,0xA2,0x00,0x40,0x5D,0X64,0XFC,0XFF,0XFE,0X02,0X49,0X52,0X00,0X00,0X97,0x0D,0x0A}, // PERIODIC SAMPLING OFF
};
unsigned char buff_write[50];

FILE *fp;
HANDLE hCom;
DWORD byteswritten,bytesread;

void NODE_DISCOVER()
{
	unsigned char str[80];
	for(int i=0;i<20;i++)
	{
		str[i] = 0;
	}
	/*for(int i=0;i<10;i++)
	{
		printf("%02X ", buff_read[0][i]);
	}*/
	printf("\n");
	WriteFile(hCom,buff_read[0],10,&byteswritten,NULL);
	Sleep(4000);
	FlushFileBuffers(hCom);
	ReadFile(hCom,str,60,&bytesread,NULL);
	printf("\n");
	/*for(int i=0;i<60;i++) 
	{
		printf("%02X ",str[i]);
	}*/
	printf("\n\nThe 16-bit address of the remote zigbee router is %02X %02X",str[8],str[9]);
	printf("\n");
	/*printf("\n\nThe 16-bit address of this router is %02X	%02X",str[37],str[38]);
	printf("\n");
	getch();*/
}

void LED_ON() // critical load on
{
	unsigned char str[80];
	for(int i=0;i<20;i++)
	{
		str[i] = 0;
	}
	/*for(int i=0;i<22;i++)
	{
		printf("%02X ", buff_read[1][i]);
	}*/
	WriteFile(hCom,buff_read[1],22,&byteswritten,NULL);
	Sleep(200);
	//FlushFileBuffers(hCom);
	ReadFile(hCom,str,30,&bytesread,NULL);
	/*printf("\n");
	str[bytesread]=0;
	for(int i=0;i<30;i++) 
	{
		printf("%02X ",str[i]);
	}
	printf("\n");*/
	FlushFileBuffers(hCom);
}
void LED_OFF() //critical load off
{
	unsigned char str[80];
	for(int i=0;i<20;i++)
	{
		str[i] = 0;
	}
	/*for(int i=0;i<22;i++)
	{
		printf("%02X ", buff_read[2][i]);
	}*/
	WriteFile(hCom,buff_read[2],22,&byteswritten,NULL);
	Sleep(200);
	//FlushFileBuffers(hCom);
	ReadFile(hCom,str,30,&bytesread,NULL);
	/*printf("\n");
	str[bytesread]=0;
	for(int i=0;i<30;i++) 
	{
		printf("%02X ",str[i]);
	}
	printf("\n");
	FlushFileBuffers(hCom);*/
}
void LED_ON1()    // non-critical load ON
{
	unsigned char str[80];
	for(int i=0;i<20;i++)
	{
		str[i] = 0;
	}
	/*for(int i=0;i<22;i++)
	{
		printf("%02X ", buff_read[3][i]);
	}*/
	WriteFile(hCom,buff_read[3],22,&byteswritten,NULL);
	Sleep(200);
	//FlushFileBuffers(hCom);
	ReadFile(hCom,str,30,&bytesread,NULL);
	/*printf("\n");
	str[bytesread]=0;
	for(int i=0;i<30;i++) 
	{
		printf("%02X ",str[i]);
	}
	printf("\n");*/
	FlushFileBuffers(hCom);
}
void LED_OFF1()   //non-critical load OFF
{
	unsigned char str[80];
	for(int i=0;i<20;i++)
	{
		str[i] = 0;
	}
	/*for(int i=0;i<22;i++)
	{
		printf("%02X ", buff_read[4][i]);
	}*/
	WriteFile(hCom,buff_read[4],22,&byteswritten,NULL);
	Sleep(200);
	FlushFileBuffers(hCom);
	ReadFile(hCom,str,30,&bytesread,NULL);
	/*printf("\n");
	str[bytesread]=0;
	for(int i=0;i<30;i++) 
	{
		printf("%02X ",str[i]);
	}
	printf("\n");*/
	FlushFileBuffers(hCom);
}
void SWITCH_ON()
{
				iResult = send( ConnectSocket, sendbuf4, (int)strlen(sendbuf3), 0 );
				/*Sleep(500);
				iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);*/
					
}
void SWITCH_OFF()
{
				iResult = send( ConnectSocket, sendbuf3, (int)strlen(sendbuf3), 0 );
				/*Sleep(500);
				iResult = recv(ConnectSocket, recvbuf, recvbuflen, 0);
				recvbuf[iResult] = 0;
				printf("%s",recvbuf);*/
					
}
void VOLTAGE_SENSE()
{
	unsigned char str[80];
	for(int i=0;i<20;i++)
	{
		str[i] = 0;
	}
	/*for(int i=0;i<22;i++)
	{
		printf("%02X ", buff_read[5][i]);   // configuring as analog input
 	}*/
	FlushFileBuffers(hCom);
	WriteFile(hCom,buff_read[5],22,&byteswritten,NULL);
	Sleep(500);
	ReadFile(hCom,str,20,&bytesread,NULL);
	printf("\n");
	/*for(int i=0;i<19;i++) 
	{
		printf("%02X ",str[i]);
	}*/
	//printf("\n");
	FlushFileBuffers(hCom);
	/*for(int i=0;i<23;i++)
	{
		printf("%02X ", buff_read[6][i]);// SAMPLING ON
 	}*/
	int j=0,num,div,rem,t=0;
	float f;
	while(j<=25)
	{
	Sleep(1500);
	//FlushFileBuffers(hCom);
	//printf("\n");
	WriteFile(hCom,buff_read[6],23,&byteswritten,NULL);
	Sleep(200);
	ReadFile(hCom,str,43,&bytesread,NULL);
	//printf("\n");
	/*for(int i=0;i<=30;i++) 
	{
		printf("%02X ",str[i]);
	}*/
	div=str[25]/16;
	rem=str[25]%16;
	num=str[24]*256+div*16+rem;
	f=num*1.2/1024;
	printf("\n\nThe voltage being sensed = %f V\n",f);
	//printf("\n");
	fflush(data);
	fprintf(data,"%d	%f\n",t,f);
	fflush(data);
	FlushFileBuffers(hCom); 
	/*Sleep(510);
	str[0]=0;
	ReadFile(hCom,str,80,&bytesread,NULL);
	for(int i=0;i<80;i++) 
	{
		printf("%02X ",str[i]);
	}
	div=str[22]/16;
	rem=str[22]%16;
	num=str[21]*256+div*16+rem;
	f=num*1.2/1024;
	printf("\n\nThe voltage being sensed = %f V\n",f);*/
	if(f<0.40)
	{
		printf("\n\tSTATUS OF LOADS");
		printf("\n\nCRITICAL LOAD :		ON");
		printf("\nNON- CRITICAL LOAD :	ON");
		printf("\nPOE (led) LOAD :	ON");
		FlushFileBuffers(hCom); 
		LED_ON();
		LED_ON1();
		SWITCH_ON();
	}
	else if(f>=0.4&&f<0.5)
	{
		printf("\n\tSTATUS OF LOADS");
		printf("\n\nCRITICAL LOAD :		 ON");
		printf("\nNON- CRITICAL LOAD :	 ON");
		printf("\nPOE (led) LOAD :	OFF");
		FlushFileBuffers(hCom); 
		SWITCH_OFF();
		LED_ON();
		LED_ON1();
	}
	else if(f>=0.5&&f<0.58)
	{
		printf("\n\tSTATUS OF LOADS");
		printf("\n\nCRITICAL LOAD :		 ON");
		printf("\nNON- CRITICAL LOAD :	OFF");
		printf("\nPOE (led) LOAD :	OFF");
		FlushFileBuffers(hCom); 
		SWITCH_OFF();
		LED_ON();
		LED_OFF1();
	}
	else
	{
		printf("\n\tSTATUS OF LOADS");
		printf("\n\nCRITICAL LOAD :		 OFF");
		printf("\nNON- CRITICAL LOAD :	 OFF");
		printf("\nPOE (led) LOAD :	 OFF");
		FlushFileBuffers(hCom); 
		SWITCH_OFF();
		LED_OFF();
		LED_OFF1();
	}
	gnuplotPipe=_popen("C:\\Users\\user\\Desktop\\gp442win32\\gnuplot\\binary\\gnuplot.exe","w");
  fprintf(gnuplotPipe, "set xlabel 'Time(milli seconds)'\n");
  fprintf(gnuplotPipe, "set ylabel 'Voltage (Volts)'\n");
  fprintf(gnuplotPipe, "set xrange [0:38000]\n");
  fprintf(gnuplotPipe, "set yrange [0:0.7]\n");
  fprintf(gnuplotPipe, "set grid\n");
  fprintf(gnuplotPipe, "set arrow 1 from 0,0.4 to 38000,0.4\n");
  fprintf(gnuplotPipe, "set arrow 2 from 0,0.5 to 38000,0.5\n");
  fprintf(gnuplotPipe, "set arrow 3 from 0,0.58 to 38000,0.58\n");
  fprintf(gnuplotPipe, "plot 'C:\\Users\\user\\Desktop\\Mydata.dat' using 1:2 with lines\n");
  fprintf(gnuplotPipe, "pause 1\n");
   _pclose(gnuplotPipe);
	t=t+1500;
	j++;
	}
	printf("\n");
	WriteFile(hCom,buff_read[8],23,&byteswritten,NULL);// SAMPLING OFF
	printf("\n");
	Sleep(200);
	FlushFileBuffers(hCom);
	gnuplotPipe=_popen("C:\\Users\\user\\Desktop\\gp442win32\\gnuplot\\binary\\gnuplot.exe","w");
  fprintf(gnuplotPipe, "set xlabel 'Time(milli seconds)'\n");
  fprintf(gnuplotPipe, "set ylabel 'Voltage (Volts)'\n");
  fprintf(gnuplotPipe, "set xrange [0:38000]\n");
  fprintf(gnuplotPipe, "set yrange [0:0.7]\n");
  fprintf(gnuplotPipe, "set grid\n");
  fprintf(gnuplotPipe, "set arrow 1 from 0,0.4 to 38000,0.4\n");
  fprintf(gnuplotPipe, "set arrow 2 from 0,0.5 to 38000,0.5\n");
  fprintf(gnuplotPipe, "set arrow 3 from 0,0.58 to 38000,0.58\n");
  fprintf(gnuplotPipe, "plot 'C:\\Users\\user\\Desktop\\Mydata.dat' using 1:2 with lines\n");
  fprintf(gnuplotPipe, "pause -1\n");
   _pclose(gnuplotPipe);
}

void choice()
{
	char cl='y',ch='\0';
	if(cl=='y'||cl=='Y')
	{
	system("cls");
	printf("\t\tENERGY MANAGEMENT\n\n");
	printf("Enter your choice from below\n\n");
	printf("1. NODE DISCOVERY\n\n");
	printf("2. TURN ON CRITICAL LOADS \n\n");
	printf("3. TURN ON ALL LOADS (CRITICAL AND NON-CRITICAL) \n\n");
	printf("4. TURN OFF NON-CRITICAL LOADS \n\n");
	printf("5. TURN OFF ALL LOADS \n\n");
	printf("6. VOLTAGE SENSING - ENERGY MANAGEMENT SOLUTION\n\n");
	printf("7. POE - LED LAMP \n\n");
	printf("8. EXIT \n\n\n");
	scanf("%c",&ch);
	printf("\nYour choice is %c\n",ch);
	switch (ch)
	{
		case '1':NODE_DISCOVER();
			break;
		case '2':
			{
				LED_ON();
				LED_OFF1();
			}
			break;
		case '3':
			{
				LED_ON1();
				LED_ON();
			}
			break;
		case '4':
			{
				LED_ON();
				LED_OFF1();
			}
			break;
		case '5':
			{
				LED_OFF1();
				LED_OFF();
			}
			break;
		case '6':VOLTAGE_SENSE();
			break;
		case '7':exit(0);
			break;
		case '8':
			{
				CloseHandle(hCom);
				fclose(data);
				// shutdown the connection since no more data will be sent
				iResult = shutdown(ConnectSocket, SD_SEND);
				if (iResult == SOCKET_ERROR) {
				wprintf(L"shutdown failed with error: %d\n", WSAGetLastError());
				closesocket(ConnectSocket);
				WSACleanup();
        		getch();
				}
		//close socket
		iResult = closesocket(ConnectSocket);
		if (iResult == SOCKET_ERROR) {
        wprintf(L"close failed with error: %d\n", WSAGetLastError());
        WSACleanup();
        }
		WSACleanup();
			exit(0);
			}
			break;
		default: 
			{
			printf("Invalid Choice \n");
			choice();
			}
			break;			
	}
	getch();
	choice();
	}
}


void main()
{
	DCB dcb;
	BOOL fSuccess;
	char *pcCommPort = "COM1";
	hCom = CreateFileA("COM1",
                      GENERIC_WRITE|GENERIC_READ,
                     0,    // comm devices must be opened w/exclusive-access
                     NULL, // no security attributes
                     OPEN_EXISTING, // comm devices must use OPEN_EXISTING
					 FILE_ATTRIBUTE_NORMAL,
                     NULL  // hTemplate must be NULL for comm devices
                     );

	if (hCom == INVALID_HANDLE_VALUE) {
      // Handle the error.
      printf ("CreateFile failed with error %d.\n", GetLastError());
      getch();
    }

	// We will build on the current configuration, and skip setting the size
	// of the input and output buffers with SetupComm.

	fSuccess = GetCommState(hCom, &dcb);

	if (!fSuccess) {
      // Handle the error.
      printf ("GetCommState failed with error %d.\n", GetLastError());
      getch();
    }

	// Fill in the DCB: baud=9,600 bps, 8 data bits, no parity, and 1 stop bit.

	dcb.BaudRate = CBR_9600;     // set the baud rate
	dcb.ByteSize = 8;             // data size, xmit, and rcv
	dcb.Parity = NOPARITY;        // no parity bit
	dcb.StopBits = ONESTOPBIT;    // one stop bit

	fSuccess = SetCommState(hCom,&dcb);
	
	if (!fSuccess) {
		// Handle the error.
		printf ("SetCommState failed with error %d.\n", GetLastError());
		getch();
    }
	COMMTIMEOUTS timeouts;

	timeouts.ReadIntervalTimeout = 20; 
	timeouts.ReadTotalTimeoutMultiplier = 10;
	timeouts.ReadTotalTimeoutConstant = 100;
	timeouts.WriteTotalTimeoutMultiplier = 10;
	timeouts.WriteTotalTimeoutConstant = 100;

	if (!SetCommTimeouts(hCom, &timeouts)){
		exit(0);
	}
   // Error setting time-outs.
	
	printf ("Serial port %s successfully reconfigured.\n", pcCommPort);
	getch();

	//----------------------
    // Declare and initialize variables.
    
    //----------------------
    // Initialize Winsock
    iResult = WSAStartup(MAKEWORD(2,2), &wsaData);
	if (iResult != NO_ERROR) {
        wprintf(L"WSAStartup failed with error: %d\n", iResult);
        getch();//return 1;
    }

    //----------------------
    // Create a SOCKET for connecting to server
	
    ConnectSocket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (ConnectSocket == INVALID_SOCKET) {
        wprintf(L"socket failed with error: %ld\n", WSAGetLastError());
        WSACleanup();
		getch();//return 1;
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
		//return 1;
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
				getch();
		}
		
	choice();
}