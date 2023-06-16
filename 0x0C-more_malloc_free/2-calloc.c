#include "main.h"

/**
 * _calloc - allocates memory for an array using malloc.
 * @nmemb: number of array members
 * @size: size of each array member
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	unsigned int i;

	ptr = malloc(sizeof(*ptr) * (nmemb * size));

	if (ptr == NULL)
		return NULL;

	if (nmemb == 0 || size == 0)
		return NULL;

	for (i = 0; i < size; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
