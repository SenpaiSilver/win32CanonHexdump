#include "File.hh"


File::File(const _TCHAR* path): _path(path), _state(File::e_CLOSED), _current_addr(0)
{
	this->_file = CreateFile(path, GENERIC_READ,
		FILE_SHARE_READ, NULL,
		OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL,
		NULL);
	if (this->_file != INVALID_HANDLE_VALUE)
		this->_state = File::e_OPEN;
}

File::~File()
{
	if (this->_state == File::e_OPEN)
		CloseHandle(this->_file);
}

unsigned char* File::GetBytes(bool read)
{
	if (read)
	{
		if (!ReadFile(this->_file, this->_buffer, I_BUFFER, &(this->_read), NULL))
			return (NULL);
		this->_current_addr += this->_read;
	}
	return (this->_buffer);
}

const DWORD File::GetRead()
{
	return (this->_read);
}

const unsigned int File::GetCurrentAddr()
{
	return (this->_current_addr);
}

const DWORD File::BufferSize()
{
	return (I_BUFFER);
}