#include "Output.hh"

Output::Output()
{
}


Output::~Output()
{
}

void Output::PrintBytes(const unsigned int addr, const DWORD nb, const char* buffer)
{
	_tprintf(TEXT("%08x  "), addr - nb);
	for (unsigned int i = 0; i < 8; ++i)
		i < nb ? _tprintf(TEXT("%02x "), buffer[i]) : _tprintf(TEXT("   "));
	_tprintf(TEXT(" "));
	for (unsigned int i = 8; i < 16; ++i)
		i < nb ? _tprintf(TEXT("%02x "), buffer[i]) : _tprintf(TEXT("   "));
	_tprintf(TEXT("|"));
	for (unsigned int i = 0; i < 16 && i < nb; ++i)
		_tprintf(TEXT("%c"), buffer[i] < ' ' ? '.' : buffer[i]);
	_tprintf(TEXT("|\n"));
}