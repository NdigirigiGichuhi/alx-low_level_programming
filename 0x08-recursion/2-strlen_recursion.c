#include "main.h"

/**
 * _strlen_recursion - finds the length of a string.
 * @s: input string
 * Return: string length.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		len = 1 + _strlen_recursion(s + 1);
	}

	return (len);
}
