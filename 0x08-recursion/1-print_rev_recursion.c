#include "main.h"
/**
 * _print_rev_recursion - a recursive function thay prints a string
 * in reverse order
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
