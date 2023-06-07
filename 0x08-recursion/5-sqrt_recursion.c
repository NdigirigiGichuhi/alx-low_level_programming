#include "main.h"

/**
 * root - return squareroot of a number
 * @num: number to find the square root of.
 * @sqroot: root to be tested.
 * Return: Square root.
 */

int root(int num, int sqroot)
{

	if (sqroot % (num / sqroot) == 0)
	{
		if (sqroot * (num / sqroot) == num)
			return (sqroot);
		else
			return (-1);
	}
	return (0 + root(num, sqroot + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find the square root of.
 * Return: square root.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (root(n, 2));
}

