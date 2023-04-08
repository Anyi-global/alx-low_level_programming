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
	int mul, res1 = 0, res2 = 0;

	if (argc > 1)
	{
		res1 = atoi(argv[1]);
		res2 = atoi(argv[2]);
		mul = res1 * res2;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
