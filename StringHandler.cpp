#include "stdafx.h"
#include "StringHandler.h"


CStringHandler::CStringHandler(void)
{
}


CStringHandler::~CStringHandler(void)
{
}

int CStringHandler::intfromCString(CString str)
{
	LPWSTR cstr = str.GetBuffer(str.GetLength());
	int num=0;

	for(int i=0; ; i++)
	{
		if(cstr[i] >= '0' && cstr[i] <= '9')
		{
			num *= 10;
			num += (int)cstr[i] - (int)'0';
		}
		else
		{
			return num;
		}
	}

	return 0;
}

char* CStringHandler::ipfromCString(CString str)
{
	LPWSTR cstr = str.GetBuffer(str.GetLength());
	char* l = (char*)malloc(str.GetLength()+1);
	int n=0;

	for(int i=0; i<str.GetLength(); i++)
	{
		if((cstr[i] >= '0' && cstr[i] <= '9') || cstr[i] == '.')
		{
			l[n++] = cstr[i];
		}
	}
	l[n] = 0;

	return l;
}

char* CStringHandler::charsfromCString(CString str)
{
	LPWSTR cstr = str.GetBuffer(str.GetLength());
	char* l = (char*)malloc(str.GetLength()+1);
	int n=0;

	for(int i=0; i<str.GetLength(); i++)
	{
		l[n++] = cstr[i];
	}
	l[n] = 0;

	return l;
}
