#include "main.h"

/**
 * print_alphabet - print alphbet in lowercase.
 * Retunt: void.
 */

void print_alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
