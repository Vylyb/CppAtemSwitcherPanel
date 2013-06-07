#include "VlcHttpConnection.h"

VlcHttpConnection::VlcHttpConnection(CString ip, CString port)
{
	success = initServer(CStringHandler::ipfromCString(ip), CStringHandler::intfromCString(port));
	isPaused=true;
}


VlcHttpConnection::~VlcHttpConnection(void)
{
}

bool VlcHttpConnection::wasSuccessful()
{
	return success;
}

bool VlcHttpConnection::initServer(char* ip, int port)
{
	httpError = HTTP_NO_ERROR;

	WSADATA w;
	if(int result = WSAStartup(MAKEWORD(2,2), &w) != 0) 
	{
		httpError = HTTP_ERROR_WSASTARTUP_FAILED;
		return false;
	} 
   
	Socket = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP); 
	if(Socket == -1) 
	{ 
		httpError = HTTP_ERROR_CREATE_SOCKET_FAILED;
		return false;
	}

	// IPv4
	sockaddr_in service;
	service.sin_family = AF_INET;

	service.sin_port = htons(port);
	service.sin_addr.s_addr = inet_addr(ip);

	if(connect(Socket, reinterpret_cast<sockaddr*>(&service), sizeof(service)) == -1) 
	{ 
		httpError = HTTP_ERROR_CONNECT_FAILED;
		return false; 
	}

	return true;
}

int VlcHttpConnection::getHttpError()
{
	return httpError;
}

CString VlcHttpConnection::sendRequest(char* request)
{
	return sendRequest(CString(request));
}

CString VlcHttpConnection::sendRequest(CString request)
{
	CString r = "GET /requests/"+request+" HTTP/1.1\r\n\r\n";
	char* rc = CStringHandler::charsfromCString(r);
	_cprintf("Sending Request '%s'\n",rc);
	if (send(Socket, rc, r.GetLength(), 0) != (int)r.GetLength()) {
		httpError = HTTP_ERROR_SEND_FAILED;
		return CString("");
	}

	CString response;
	int resp_len = BUFFERSIZE;
	char buf[BUFFERSIZE];
	resp_len = recv(Socket, buf, BUFFERSIZE, 0);
	do
	{
		resp_len = recv(Socket, buf, BUFFERSIZE, 0);
		if(resp_len > 0)
			response += buf;
		//_cprintf("read %d bytes\n",resp_len);
		//_cprintf("%s\n",buf);
	}
	while(resp_len == BUFFERSIZE);

	return response;
}

CString VlcHttpConnection::sendStatusRequest(CString request)
{
	if(request.GetLength() > 0)
		return sendRequest("status.xml?command="+request);
	else
		return sendRequest("status.xml");
}

CString VlcHttpConnection::sendStatusRequest(char* request)
{
	return sendStatusRequest(CString(request));
}

CString VlcHttpConnection::getPlaylist()
{
	return sendRequest("playlist.xml");
}

void VlcHttpConnection::playSelected()
{
	sendStatusRequest("pl_play&id="+selectedVideoID);
}

void VlcHttpConnection::pause()
{
	sendStatusRequest("pl_forcepause");
}

void VlcHttpConnection::resume()
{
	sendStatusRequest("pl_forceresume");
}

void VlcHttpConnection::setSelectedVideoID(CString id)
{
	selectedVideoID=id;
}


void VlcHttpConnection::setSelectedVideoName(CString name)
{
	selectedVideoName=name;
}
