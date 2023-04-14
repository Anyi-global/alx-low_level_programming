#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* _realloc - a function that reallocates memory using malloc and free
* @ptr: a pointer to the old memory block
* @old_size: the size of the old memory block
* @new_size: the size of the new memory block
*
* Return: pointer to the new memory block
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return NULL;
	}

	if (ptr == NULL)
	{
		return malloc(new_size);
	}

	if (new_size == old_size) {
		return ptr;
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL) {
		return NULL;
	}

	if (new_size > old_size)
	{
		memcpy(new_ptr, ptr, old_size);
	}
	else
	{
		memcpy(new_ptr, ptr, new_size);
	}

	free(ptr);
	return new_ptr;
}
