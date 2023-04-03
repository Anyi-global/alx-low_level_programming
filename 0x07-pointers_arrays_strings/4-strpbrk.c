#include "main.h"
/**
 * _strpbrk - A function that searches a string for any of a set of bytes.
 * @s: A pointer to the string to search
 * @accept: A pointer to the set of bytes to search for.
 * Return: Returns a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	for (; *s != '\0'; ++s)
	{
		char *a;

		for (a = accept; *a != '\0'; ++a)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
	}
	return (0);
}
