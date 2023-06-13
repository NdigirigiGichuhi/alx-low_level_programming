#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer to the memory space of the concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, len1 = 0, len2 = 0;
	char *s3;

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

	s3 = (char *) malloc(sizeof(*s3) * (len1 + len2 + 1));

	if (s3 == NULL)
		return (NULL);

	i = 0;

	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}
	
	i = 0;

	while (s2[i] != '\0')
	{
			s3[len1 + i] = s2[i];
		i++;
	}
	s3[len1 + i] = '\0';

	return(s3);

}
