#include <stdio.h>
/**
 * main - A program that prints the size of various types on computer it is compiled and run on
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %s byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
