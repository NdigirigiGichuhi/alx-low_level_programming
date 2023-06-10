#include <stdio.h>
/**
 * main - entry point
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int i, num = 0;

	(void) argv;
	for (i = 1; i < argc; i++)
	{
		num = num + 1;
	}

	printf("%d\n", num);
	return (0);
}
