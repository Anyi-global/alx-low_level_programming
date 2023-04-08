#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all the arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: returns the argument list
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
