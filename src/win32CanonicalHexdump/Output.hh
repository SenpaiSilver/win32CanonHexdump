#pragma once

#include <Windows.h>
#include <tchar.h>

class Output
{
public:
	Output();
	~Output();
	static void PrintBytes(const unsigned int addr, const DWORD nb, const unsigned char* buffer);
};

