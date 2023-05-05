#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: the first decimal number
 * @m: the second decimal number
 *
 * Return: returns the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int diff;

	count = 0;
	diff = n ^ m;
	while (diff != 0)
	{
		if (diff & 1)
		{
			count++;
		}
		diff >>= 1;
	}
	return (count);
}
