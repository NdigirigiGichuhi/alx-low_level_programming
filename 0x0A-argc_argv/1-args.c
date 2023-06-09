#include <stdio.h>
/**
 * main - entry point.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int i;

	(void) argv;

	for (i = 0; i > argc; i++)
		;
	printf("%d\n", i);
	return (0);
}
