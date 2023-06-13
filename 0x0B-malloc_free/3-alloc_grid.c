#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a two d array of integers.
 * @width: number of columns.
 * @height: number oof rows.
 * Return: if width or height is 0, return NULL.
 * return NULL on failure.
 * Otherwise return array.
 */

int **alloc_grid(int width, int height)
{
	int **matrix, i, j;

	matrix = malloc(height * sizeof(int *));
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
	}

	if (width == 0 || height == 0)
	{
		for (i = 0; i < height; i++)
			free(matrix[i]);
		free(matrix);
		return (NULL);
	}

	if (matrix == NULL)
	{
		for (i = 0; i < height; i++)
			free(matrix[i]);
		free(matrix);
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				matrix[i][j] = 0;
			}

		}
	}

	return (matrix);
}

