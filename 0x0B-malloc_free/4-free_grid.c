#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees grid.
 * @grid: array of integers.
 * @height: height of the grid.
 * Return: Void.
 */

void free_grid(int **grid, int height)
{
        if (grid != NULL && height != 0)
        {
                for (height = 0; height >= 0; height--)
                        free(grid[height]);
                free(grid);
        }
}

