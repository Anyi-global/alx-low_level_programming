#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: returns the index of a match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int elem;
	int digit;

	if (size <= 0)
	{
		return (-1);
	}
	for (elem = 0; elem < size; elem++)
	{
		digit = cmp(array[elem]);
		if (digit != 0)
		{
			return (elem); 
		}
	}
	return (-1);
}
