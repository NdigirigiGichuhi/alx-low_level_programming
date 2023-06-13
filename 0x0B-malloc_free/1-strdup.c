#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be copied.
 * Return: pointer to the memory allocated
 */

char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		len++;
		i++;
	}

	ptr = (char *) malloc(sizeof(*ptr) * (len + 1));
	i = 0;

	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = str[i];
		i++;
	}
	ptr[i] = '\0';

	return (ptr);
}
