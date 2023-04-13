#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc function
 * @b: The size of memory block to allocate
 *
 * Return: returns a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *result;

	result = malloc(b);
	if (result == NULL)
	{
		exit(98);
	}
	return (result);
}
