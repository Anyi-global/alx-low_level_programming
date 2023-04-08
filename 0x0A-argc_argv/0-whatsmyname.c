#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the name of a program
 * @argc: the number of command line arguments
 * @argv: the array of strings of command line arguments
 * Return: the program name
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
