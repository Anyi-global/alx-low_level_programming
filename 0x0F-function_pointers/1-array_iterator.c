#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array
 * @array: pointer to the array of integers
 * @size: size of the array
 * @action: pointer to the function to use
 *
 * Return: void
 */

void array_iterator(int *array,size_t size, void (*action)(int))
{
	unsigned int elem;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (elem = 0; elem < size; elem++)
	{
		action(array[elem]);
	}
}
