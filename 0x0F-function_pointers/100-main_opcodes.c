#include <stdio.h>
#include <stdlib.h>
/**
* main - a program that prints the opcodes of it's main function
* @argc: number of arguments
* @argv: argument vector
* Return: Always 0 (Success)
*/

int main(int argc, char **argv)
{
	int nbytes, i;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	addr = (char *)&main;

	for (i = 0; i < nbytes; i++)
	{
		if (i == nbytes - 1)
		{
			printf("%02hhx\n", addr[i]);
			break;
		}
		printf("%02hhx ", addr[i]);
	}

	return (0);
}
