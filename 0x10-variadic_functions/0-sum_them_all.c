#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - a function that returns the sum of all it's parameters
 * @n: a constant parameter that can't be modified throughout the program
 *
 * Return: returns the sum of all it's parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int num, i, total;
	va_list args;

	total = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		total += num;
	}
	va_end(args);
	return (total);
}
