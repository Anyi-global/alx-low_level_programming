#include <stdio.h>
/**
 * main - A program that prints alphabets in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar('%c\n', c);
	}
	return (0);
}
