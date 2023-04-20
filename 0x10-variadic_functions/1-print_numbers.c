#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: a character that separates the numbers
 * @n: number of integers to be printed
 * @...: variable number of integers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num, i;
	va_list pns;

	va_start(pns, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(pns, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);

		}
	}
	va_end(pns);

	printf("\n");
}
