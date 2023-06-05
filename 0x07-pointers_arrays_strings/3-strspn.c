#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: The string to be compared to.
 * @accept: string to count the substring.
 * Return: count of similar bytes.
 */

unsigned int _strspn(char *s, char *accept)
{
       unsigned i, count = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
