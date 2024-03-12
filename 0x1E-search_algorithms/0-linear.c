#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integerss
 * using linear search algorithm.
 * @array: Array to search.
 * @size: number of elements in array.
 * @value: value to search for.
 * Return: if found, NULL.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		if (array[i] == value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			return (i);
		}
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}

	return (-1);
}
