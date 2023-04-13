#include <stdlib.h>
#include "main.h"
/**
 * _calloc - a function that allocates memory for an array using malloc
 * @nmemb: Size of the array
 * @size: size of int
 *
 * Return: returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	p = (char *)ptr;
	for (i = 0; i < nmemb * size; ++i)
	{
		p[i] = 0;
	}
	return (ptr);
}
