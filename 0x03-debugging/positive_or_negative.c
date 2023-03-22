#include "main.h"
/**
 * positive_or_negative - A fuction that checks
 * positive or negative numbers
 * @i: The number to be checked
 * Return: returns the value of positive or negative number
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else
	{
		printf("%d is positive\n", i);
	}
}
