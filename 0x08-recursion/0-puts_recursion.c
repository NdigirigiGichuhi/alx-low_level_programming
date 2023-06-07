#include "main.h"

/**
 * _puts_recursion - prints a string fillowed by a new line.
 * @s: string to be printed.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	char ch;

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		ch = s[0];
		_putchar(ch);
		_puts_recursion(s + 1);
	}
}
