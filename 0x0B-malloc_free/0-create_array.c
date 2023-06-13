#include "main.h"

/**
 * create_array - creates an array of chars, and initializes
 *	it with a specific char.
 *
 * @size: size of the array.
 * @c: character to initialize the array.
 *
 * Return: pointer to the allocated memory.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = (char *) malloc(size * sizeof(*ptr));

	if (ptr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
