#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * @s: string to be checked
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char temp;
	int length = 0;

	while (*(s + length) != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + length - 1 - i);
		*(s + length - 1 - i) = temp;
	}
}
