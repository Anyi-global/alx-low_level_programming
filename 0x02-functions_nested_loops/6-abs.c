#include "main.h"
/**
 * _abs - A function that computes the absolute value of an integer
 * @c: number to be computed
 * Return: returns absolute interger value
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	else
	{
		return (c);
	}
}
