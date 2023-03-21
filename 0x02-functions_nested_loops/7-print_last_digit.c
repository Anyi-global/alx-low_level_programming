#include "main.h"
/**
 * print_last_digit - A function that prints last digit of a number
 * @n: The number to be checked
 * Return: returns the last digit
 */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	else
	{
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
