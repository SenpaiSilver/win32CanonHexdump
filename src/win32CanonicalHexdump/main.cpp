#include <Windows.h>
#include <tchar.h>

#include "File.hh"
#include "Output.hh"

int _tmain(int ac, _TCHAR* av[])
{
	File* file;
	unsigned char* buffer;

	if (ac < 2)
		return (1);
	for (int i = 1; i < ac; i++)
	{
		if (ac > 2)
			_tprintf(TEXT("File: %s\n"), av[i]);
		file = new File(av[i]);
		while ((buffer = file->GetBytes()) != NULL && file->GetRead())
			Output::PrintBytes(file->GetCurrentAddr(), file->GetRead(), buffer);
		delete(file);
	}
	return (0);
}