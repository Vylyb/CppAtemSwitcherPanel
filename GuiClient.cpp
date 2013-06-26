#include "stdafx.h"
#include "GuiClient.h"


GuiClient::GuiClient(void)
{
}


GuiClient::~GuiClient(void)
{
}

int GuiClient::initClient(CString ip, CString port)
{
	return initClient(CStringHandler::ipfromCString(ip), CStringHandler::intfromCString(port));
}

int GuiClient::initClient(char* ip, int port)
{
	WSADATA w;
	if(int result = WSAStartup(0x0101, &w) != 0)
	{
		return ERROR_WSA_STARTUP;
	} 
   
	Socket = socket(AF_INET,SOCK_DGRAM,0);
	if(Socket == -1) 
	{ 
		return ERROR_CREATE_SOCKET;
	}

	// IPv4
	sockaddr_in service;
	service.sin_family = AF_INET;

	service.sin_port = htons(port);
	service.sin_addr.s_addr = inet_addr(ip);

	if(connect(Socket, reinterpret_cast<sockaddr*>(&service), sizeof(service)) == -1) 
	{ 
		return ERROR_CONNECT; 
	}

	this->ip=ip;
	this->port=port;

	return SUCCESS;
}

int GuiClient::sendCommand(char* command)
{
	return sendCommand(CString(command));
}

int GuiClient::sendCommand(CString command)
{
	if (send(Socket, CStringHandler::charsfromCString(command), command.GetLength(), 0) != (int)command.GetLength()) {
		return ERROR_SEND;
	}
}

char* GuiClient::getIP()
{
	this->ip;
}

int GuiClient::getPort()
{
	this->port;
}

