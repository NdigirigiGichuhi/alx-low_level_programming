#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0.
 */

int main(int argc, char **argv)
{
	int ans, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		ans = a * b;
		printf("%d\n", ans);
	}

	return (0);
}
