#include <stdio.h>
/**
 * main - A program that prints base 16 numbers in lower case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char c;
	
	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
