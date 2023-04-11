#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars and initializes it
 * with a specific character
 * @size: size of the array
 * @c: the specific character to be initialized the array with
 *
 * Return: returns pointer to the array if successful
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
