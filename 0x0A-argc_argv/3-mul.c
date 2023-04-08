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
	int mul = 1;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}