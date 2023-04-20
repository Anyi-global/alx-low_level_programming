#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
* op_add - a function that adds two arguments
* @a: the first argument
* @b: the second argument
*
* Return: returns the result of the addition
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - a function that subtracts two arguments
* @a: the first argument
* @b: the second argument
*
* Return: returns the result of the subtraction
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - a function that multiplies two arguments
* @a: the first argument
* @b: the second argument
*
* Return: returns the result of the multiplication
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - a function that divides two arguments
* @a: the first argument
* @b: the second argument
*
* Return: returns the result of the division
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
* op_mod - a function that divides 2 arguments and returns the remainder
* @a: the first argument
* @b: the second argument
*
* Return: returns the result of the modulos
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
