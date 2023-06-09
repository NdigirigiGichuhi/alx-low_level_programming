#include "main.h"

/**
 * _strcmp - Works the same as strcmp.
 * @s1: string 1.
 * @s2: string 2.
 * Return: if equal, return 0.
 * if not equal and s1 is greater than s2, return 15.
 * otherwise return -15.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, flag = 0;

	while (flag == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		flag = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (flag);
}
