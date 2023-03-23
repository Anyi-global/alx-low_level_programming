#include "main.h"
/**
 * _isdigit - A function that checks for a digit
 * (0 through 9)
 * @c: value to be checked
 * Return: returns 1 if digit, otherwise returns 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
