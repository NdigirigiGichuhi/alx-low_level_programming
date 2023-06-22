#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of parameters.
 * Return: sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
