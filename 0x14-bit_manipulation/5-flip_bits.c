#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 *	flip to get one number to another.
 * @n: pointer to the bit.
 * @m: the number to flip n to.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, count = 0;

	while (xor > 0)
	{
		count += (xor & 1);
		xor >>= 1;
	}

	return (count);
}
