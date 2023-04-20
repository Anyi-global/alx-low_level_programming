#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: list of argument types passed to the function
 * @...: variable number of values to be printed
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list pa;
	const char *p = format;
	char c;
	int i;
	float f;
	char *s;
	int printed;

	va_start(pa, format);

	printed = 0;

	while (*p != '\0')
	{
		switch (*p)
		{
			case 'c':
				c = (char) va_arg(pa, int);
				printf("%c", c);
				printed = 1;
				break;
			case 'i':
				i = va_arg(pa, int);
				printf("%d", i);
				printed = 1;
				break;
			case 'f':
				f = (float) va_arg(pa, double);
				printf("%f", f);
				printed = 1;
				break;
			case 's':
				s = va_arg(pa, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				printed = 1;
				break;
		}
		if (*(p + 1) != '\0' && printed)
		{
			printf(", ");
			printed = 0;
		}
		p++;
	}
	va_end(pa);

	printf("\n");
}
