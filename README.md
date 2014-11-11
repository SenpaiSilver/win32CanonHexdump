win32CanonHexdump
=================

Hexdump written with the WINAPI defaulting to canonical output.

Usage
=====

After compiling you must supply one or more file as an argument.

	senpaisilver:bin$> echo 'HelloWorld !' > helloworld.txt
	senpaisilver:bin$> ./win32CanonicalHexdump.exe helloworld.txt
	00000000  48 65 6c 6c 6f 57 6f 72  6c 64 20 21 0a          |HelloWorld !.|

No options are implemented, it will print out the hexdump in canonical form.

Download
========

You can download the binary file [here](https://github.com/SenpaiSilver/win32CanonHexdump/raw/master/bin/win32CanonicalHexdump.exe).

To Do
=====

- [ ] Implement options for the output;
- [ ] Read on STDIN;
- [ ] Implement colors.