This project is about static libraries.
In a UNIX we have two types of libraries:
	-static libraries
	-dynamic/share libraries.

To create a library we us ar (archiver)
example ar rc libutil.a  file_1.o file_2.o
	-ar is the archive to create the library
	-rc is  command to create or replace a library files.
	-libutil.a is the library to be created
	-file_1.o and file_2.o are the file added to the library.
	-
