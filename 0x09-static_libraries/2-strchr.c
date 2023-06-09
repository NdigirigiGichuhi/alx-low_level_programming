#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: String ciontainig the character.
 * @c: Character to be located.
 * Return: first occurence of c of NULL if not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
