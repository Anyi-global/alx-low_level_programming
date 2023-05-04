#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: returns the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;
	char c;

	num = 0;
	i = 0;
	if (b == NULL)
	{
		return (0);
	}
	while ((c = b[i++]) != '\0')
	{
		if (c != '0' && c != '1')
		{
			return (0);
		}

		num <<= 1;
		if (c == '1')
		{
			num += 1;
		}
	}

	return (num);
}
