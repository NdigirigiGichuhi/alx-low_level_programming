#include "main.h"

/**
 * *_strncpy - copies  string.
 * @dest: where string will be copied.
 * @src: string to be copied.
 * @n: number of bytes to be copied.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
