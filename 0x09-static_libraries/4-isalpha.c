#include "main.h"

/**
 * _isalpha - check for alphabetic character.
 * @c: character to be tested.
 * Return: if c is an alphabetic character return 1, otherwise 0;
 */

int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65 && c <= 86)))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
