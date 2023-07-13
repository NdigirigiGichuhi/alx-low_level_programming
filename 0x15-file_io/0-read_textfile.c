#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read from.
 * @letters: number of letters to read.
 * Return: number of letters read and written.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t read_chars, written_chars;
	char *buffer;

	fd = open(filename, O_RDONLY);

	if (filename == NULL)
		return (0);

	if (fd == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
		return (0);

	read_chars = read(fd, buffer, letters);

	if (read_chars == -1)
		return (0);

	written_chars = write(STDOUT_FILENO, buffer, letters);

	if (written_chars == -1)
		return (0);

	close(fd);
	free(buffer);
	return (read_chars);
}
