#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: Number to be checked.
 * Return: If c is lowercase we return 1, otherwise 0.
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
