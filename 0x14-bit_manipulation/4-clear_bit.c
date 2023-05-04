#include "main.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer to the decimal number
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: returns 1 if successful, -1 if Error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1 << index);

	return (1);
}
