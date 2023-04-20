#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: strings to be printed between the strings
 * @n: number of strings to be printed
 * @...: variable number of strings to be printed
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ps;

	va_start(ps, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ps, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(ps);

	printf("\n");
}
