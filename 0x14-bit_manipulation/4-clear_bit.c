#include "main.h"

/**
 * clear_bit - sets the value of a bit 0 at a given index.
 * @n: pointer to the bit.
 * @index: index to clear the bit.
 * Return: 1 if it worked, otherwise -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
	}
	return (1);
}

