#include "main.h"

/**
 * binary_to_uint - converst a binary number to an unsigned int.
 * @b: pointeer to a string of 0 and 1.
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, result = 1;
	int len = 0;

	for (len = 0; b[len];)
		len++;


	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
		{
			return (0);
		}
		else
		{
			num = num + (b[len] - '0') * result;
			result = result * 2;
		}
	}
	return (num);
}
