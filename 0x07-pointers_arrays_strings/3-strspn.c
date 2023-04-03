#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: The string to be scanned
 * @accept: The string containint the list of characters to match in s
 * Return: Returns the number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	char *p = s;
	char *q;

	while (*p != '\0')
	{
		q = accept;
		while (*q != '\0')
		{
			if (*p == *q)
			{
				length++;
				break;
			}
			q++;
		}
		if (*q == '\0')
		{
			break;
		}
		p++;
	}
	return (length);
}
