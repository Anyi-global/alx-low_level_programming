#include <stdio.h>
/**
 * main - A program that prints lowercase alphabets except q and e
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' && c == 'q')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
