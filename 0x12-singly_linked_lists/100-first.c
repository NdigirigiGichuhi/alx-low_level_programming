#include <stdio.h>
#include "lists.h"

void __attribute__((constructor)) before_main(void);
/**
 * before_main - executed before the main function.
 * Return: void.
 */

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

