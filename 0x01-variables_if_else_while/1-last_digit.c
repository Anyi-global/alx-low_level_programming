#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - A program that prints the last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, digit;

	digit = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (digit > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, digit);
	}
	else if (digit == 0)
	{
		printf("last digit of %d is %d and is 0\n", n, digit);
	}
	else if (digit < 6 && != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
