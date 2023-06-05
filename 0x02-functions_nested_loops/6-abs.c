#include "main.h"

/**
 * _abs - computes the absolute value of a integer.
 * @n: integer whose absolute value is computed.
 * Return: Absolute value.
 */

int _abs(int n)
{
	int d;

	if (n < 0)
	{
		d = n * -1;
		return (d);
	}
	else
	{
		return (n);
	}
}
