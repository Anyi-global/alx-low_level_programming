#include "main.h"
/**
 * _isalpha - A function that checks lowercase or uppercase
 * @c: The character to be checked
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c > 97 && c <= 122) || (c > 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
