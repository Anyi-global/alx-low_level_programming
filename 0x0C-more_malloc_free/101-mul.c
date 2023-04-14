#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void multiply(char *num1, char *num2);
int is_valid_number(char *num);

/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	char *num1;
	char *num2;

	if (argc != 3)
	{
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	if (!is_valid_number(num1) || !is_valid_number(num2))
	{
		return (98);
	}

	multiply(num1, num2);

	return (0);
}

/**
* multiply - a function that multiplies two command line arguments
* @num1: the first number
* @num2: the second number
*
* Return: multiplication result of the two arguments
*/

void multiply(char *num1, char *num2)
{
	int i, j, k;
	int len1, len2, len_result, carry, sum;
	int *result;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len_result = len1 + len2;
	carry = 0;
	sum = 0;

	result = calloc(len_result, sizeof(int));
	if (result == NULL)
	{
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			k = i + j + 1;
			sum = (num1[i] - '0') * (num2[j] - '0') + carry + result[k];
			carry = sum / 10;
			result[k] = sum % 10;
		}
		result[i + j + 1] = carry;
	}

	i = 0;
	while (result[i] == 0 && i < len_result - 1)
	{
		i++;
	}

	for (; i < len_result; i++)
	{
		printf("%d", result[i]);
	}
	printf("\n");

	free(result);
}

/**
* is_valid_number - a function that checks for valid number
* @num: number to be checked
*
* Return: returns 0 if num is valid, and 1 if invalid
*/

int is_valid_number(char *num)
{
	int i;

	i = 0;
	while (num[i])
	{
		if (!isdigit(num[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
