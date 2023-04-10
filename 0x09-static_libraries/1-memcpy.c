#include "main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: A pointer to the destination memory block
 * @src: A pointer to the source memory block
 * @n: The number of bytes to copy
 *
 * Return: returns pointer to the destination memory block
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
