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
	int quartz, quartile;

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

	quartz = cents / 2;
	cents %= 2;

	quartile = cents / 1;
	cents %= 1;

	pennies = cents;

	printf("%d\n", quarters + dimes + nickels + pennies + quartz + quartile);

	return (0);
}
