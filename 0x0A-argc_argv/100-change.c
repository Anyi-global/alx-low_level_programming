#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: returns the result of the multiplication
*/

int main(int argc, char *argv[])
{
	int cents, quarters, dimes, nickels, pennies;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	quarters = cents / 25;
	cents %= 25;

	dimes = cents / 10;
	cents %= 10;

	nickels = cents / 5;
	cents %= 5;

	pennies = cents;

	printf("%d\n", quarters + dimes + nickels + pennies);

	return (0);
}

