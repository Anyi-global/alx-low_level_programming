#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line
 * @str: string to be checked
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0, i, start;

	while (*(str + len) != '\0')
	{
		len++;
	}
	start = len % 2 == 0 ? len / 2 : (len + 1) / 2;
	for (i = start; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
