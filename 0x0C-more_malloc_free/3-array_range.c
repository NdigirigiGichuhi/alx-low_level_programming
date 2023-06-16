#include "main.h"


int *array_range(int min, int max)
{
	int *array, i;

	int len = &max - &min;

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
