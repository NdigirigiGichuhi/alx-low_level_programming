This project is about file input and output in Linux.
We are reading, writing and appending content on the files.
First we need to declare a file pointer of type FILE. ie FILE *file.
Now we'll use the pointer to open or create a file using fopen() function.
fopen() takes two arguments: filename/path and the mode we want to open the file in.
We have three main modes: write(w), read(r) and appen(a);

	file = fopen("file1.txt", "w");
This will open the file or create the file if it doesn't exist.
Next we need to check if the file is NULL.
If it is NULL the the opening process failed and we should return 1.
	
	if (fille == NULL)
	{
		perror("File opening failed");
		return (1);
	}

If the file opened successfully the we can go ahead and write on it.
There are several functions used to write on a file.
	1. fputc - This will write a single character on the file.
		syntax: fputs(char c, file);
	
	2. fgets - This will write a string on a file.
		syntax: fputs(str, file);


