#pragma once

#include "StringHandler.h"

#define SUCCESS				0
#define ERROR_WSA_STARTUP	1
#define ERROR_CREATE_SOCKET	2
#define ERROR_CONNECT		3
#define	ERROR_SEND			4

class GuiClient
{
public:
	GuiClient(void);
	~GuiClient(void);
	char*	getIP();
	int		getPort();
	int		initClient(CString ip, CString port);
	int		initClient(char* ip, int port);
	int		sendCommand(char* command);
	int		sendCommand(CString command);

private:
	int		Socket;
	char*	ip;
	int		port;
};

