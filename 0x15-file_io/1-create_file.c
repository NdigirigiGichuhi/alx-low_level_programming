#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @text_content: string to compute the length.
 * Return: length of a string.
 */

int _strlen(char *text_content)
{
	int i = 0, len = 0;

	while (text_content[i] != '\0')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to be created.
 * @text_content: string to be written on the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	bytes_written = write(fd, text_content, _strlen(text_content));

	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
