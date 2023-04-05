#include "main.h"
/**
* _pow_recursion - a recursive function that returns the value
* of x raised to power y
* @x: The base value whose value is to be calculated
* @y: The power value
* Return: returns the value of the power
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
