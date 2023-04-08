#include <stdlib.h>
#include <stdio.h>
/**
 * main - a program that prints the number of args passed into it
 * @argc: the number of arguments passed to the program
 * @argv: the array of strings of arguments passed to the program
 * Return: returns the number of arguments
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	/*argv[0] = 0;*/
	return (0);
}
