#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
/**
* is_digit - a function that checks for a digit number
* @str: a constant pointer to a string
*
* Return: returns 0 (Success) if digit
*/

int is_digit(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
* main - a program that multiplies two numbers
* @argc: argument count
* @argv: argument vector
* Return: returns the result of the multiplication
*/

int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);

	return (0);
}
