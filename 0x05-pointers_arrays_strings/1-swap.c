#include "main.h"

/**
 * swap_int - swaps two integers.
 * @a: interger to be swapped.
 * @b: interger to be swapped.
 * Return: Void.
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
