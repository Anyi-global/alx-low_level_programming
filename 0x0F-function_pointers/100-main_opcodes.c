#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the opcodes of it's main function
* @argc: number of arguments
* @argv: argument vector
* Return: returns the opcodes
*/

int main(int argc, char **argv)
{
	int nbytes, i;
	char *address;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	address = (char *)&main;

	for (i = 0; i < nbytes; i++)
	{
		printf("%02hhx ", address[i]);
	}
	printf("\n");

	return (0);
}
