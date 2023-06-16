#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: minimum array element
 * @max: maximum array element
 * Return: pointer to allocated memory.
 */

int *array_range(int min, int max)
{
	int *array, i, len = 0;

	len = (max - min) + 1;

	array = malloc(sizeof(*array) * len);

	if (array == NULL)
		return (NULL);

	if (min > max)
		return (NULL);

	for (i = min; i <= max; i++)
	{
		array[i] = i;
	}

	return (array);
}
