#include "main.h"

/**
 * set_bit - sets the vali=ue of a bit to 1 at a given index.
 * @n: pointer to bit to be set
 * @index: where the bit will be set.
 * Return: 1 if it workes, otherwise -1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
