#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: integer
 * @index: index of the bit you want.
 * Return: the value of the bit at index index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
