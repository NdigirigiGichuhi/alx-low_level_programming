#include "main.h"

/**
 * factorial - return the factorial of a given number.
 * @n: number to get factorial
 * Return: -1 if n is less than 0, otherwise factorial.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
