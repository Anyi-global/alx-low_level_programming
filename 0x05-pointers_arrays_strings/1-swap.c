#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: The first integer to be swapped
 * @b: The second integer to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
