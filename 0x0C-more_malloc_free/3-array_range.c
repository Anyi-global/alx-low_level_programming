#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: pointer to the array of integers
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
