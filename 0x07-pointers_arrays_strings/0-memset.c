#include "main.h"

/**
 * *_memset - fills memory with a constant byte.
 * @s: the string whose memory is to be filled.
 * @b: the character which will fill the memory.
 * @n: Number of bytes to be filled.
 * Return: filled string.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
