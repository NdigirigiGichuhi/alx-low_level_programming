#include "main.h"

/**
  * more_numbers - prints 10 times the numbers 0-14
  * j / 10 - prints the tens digit
  * j % 10 - prints the ones digit
  *
  * Return: void
  */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
	for (j = 0; j <= 14; j++)
	{
		if (j > 9)
		{
		_putchar((j / 10) + '0');
		}
		_putchar((j % 10) + '0');
	}
	_putchar('\n');
	}
}
