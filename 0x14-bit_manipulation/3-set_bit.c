#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: pointer to the decimal number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: returns 1 if the value is set successfully
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shift;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	for (shift = 1; index > 0; index--, shift *= 2)
	{
		;
	}
	*n += shift;

	return (1);
}
