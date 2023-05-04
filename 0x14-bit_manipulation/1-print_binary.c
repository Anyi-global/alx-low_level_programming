#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the decimal number to be converted
 *
 * Return: returns the binary number
 */

void print_binary(unsigned long int n)
{
	int shift;
	int i;

	shift = sizeof(unsigned long int) * 8 - 1;
	for (i = shift; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
