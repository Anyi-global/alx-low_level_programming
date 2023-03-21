#include "main.h"
/**
 * main - A function that prints the alphabet in lowercase
 * print_alphabet - A function that prints the alphabets in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
