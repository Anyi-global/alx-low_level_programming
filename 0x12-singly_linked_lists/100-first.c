#include <stdio.h>
#include "lists.h"

void first_call(void) __attribute__((constructor));

/**
 * first_call - function that prints text before the main function is executed
 *
 * Return: void
 */

void first_call(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
