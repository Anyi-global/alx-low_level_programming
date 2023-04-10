#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: A pointer to the string to search
 * @c: The character to locate
 *
 * Return: returns the first occurence of the character c
 * in the string s, or Null if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
