#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the decimal number
 * @index: the index, starting from 0 of the bit you want to get
 *
 * Return: returns the value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shift;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	shift = n >> index;
	return (shift & 1);
}
