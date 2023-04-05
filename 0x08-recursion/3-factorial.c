#include "main.h"
/**
 * factorial - a recursive function that returns factorial of a number
 * @n: the factorial number
 *
 * Return: returns the factorial of a given number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
