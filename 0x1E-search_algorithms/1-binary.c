#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using binary search algorithm.
 * @array: pointer to the first element to search in
 * @size: number of elements in an array.
 * @value: the value to search for.
 * Return: index where the value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid, i;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = (high + low) / 2;

		printf("Searching in array: ");

		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(" ,");
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			low = mid + 1;
		} else
		{
			high = mid - 1;
		}
	}

	return (-1);
}
