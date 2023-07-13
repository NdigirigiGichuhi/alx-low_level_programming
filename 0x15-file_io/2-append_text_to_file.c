#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: content to append.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, i = 0;
	ssize_t written_chars;
	
	while (text_content[i] != '\0')
	{
		len++;
		i++;
	}
		
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	written_chars = write(fd, text_content, len);

	if (written_chars == -1)
		return (-1);

	return (1);
}
		
