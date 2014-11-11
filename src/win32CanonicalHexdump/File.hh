#pragma once

#include <Windows.h>
#include <tchar.h>

#define I_BUFFER (16)

class File
{
private:
	const _TCHAR* _path;
	enum E_STATE { e_OPEN, e_CLOSED, e_ENDED } _state;
	char _buffer[I_BUFFER];
	DWORD _read;
	unsigned int _current_addr;
	HANDLE _file;
public:
	File(const _TCHAR* path);
	~File();
	char* GetBytes(bool read = true);
	const DWORD GetRead();
	const unsigned int GetCurrentAddr();
	static const DWORD BufferSize();
};

