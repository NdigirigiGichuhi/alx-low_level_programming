#include "main.h"

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i] < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
