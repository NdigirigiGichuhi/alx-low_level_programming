#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: base number.
 * @y: power number.
 * Return: if y is less than 0, return -1, otherwise return answer.
 */

int _pow_recursion(int x, int y)
{
	int ans;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 0)
		ans = x * _pow_recursion(x, y - 1);

	return (ans);
}
