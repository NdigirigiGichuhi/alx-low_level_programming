#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of integers to be allocated space.
 * Return: void:
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(sizeof(*ptr) * b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
