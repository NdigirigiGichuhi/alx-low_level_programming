#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copied.
 * Return: Pointer to the memory allocated.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *copy;
	unsigned int len1 = 0, len2 = 0, i = 0;

	while (s1[i] != '\0')
	{
		len1++;
		i++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		len2++;
		i++;
	}

	copy = malloc(sizeof(*copy) * (len1 + n + 1));

	if (copy == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		copy[i] = s1[i];
		i++;
	}

	i = 0;

	if (n >= len2)
	{
		while (s2[i] != '\0')
		{
			copy[len1 + i] = s2[i];
			i++;
		}
		copy[len1 + i] = '\0';
	}
	else
	{
		while (i < n)
		{
			copy[len1 + i] = s2[i];
			i++;
		}
		copy[len1 + i] = '\0';
	}

	return (copy);
}
