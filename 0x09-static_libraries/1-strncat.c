#include "main.h"

/**
 * *_strncat - conctentes two strings.
 * @dest: where  string is added.
 * @src: string to be concatenated to dest.
 * @n: number of bytes to be concatenated.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0, i;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		len2++;
	}

	if (n >= len2)
	{
		for (i = 0; i <= len2; i++)
		{
			dest[len1 + i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[len1 + i] = src[i];
		}
	}

	return (dest);
}
