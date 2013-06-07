#pragma once
class CStringHandler
{
public:
	CStringHandler(void);
	~CStringHandler(void);
	static	int		intfromCString(CString str);
	static	char*	ipfromCString(CString str);
	static	char*	charsfromCString(CString str);
};

