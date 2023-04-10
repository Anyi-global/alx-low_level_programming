#include "main.h"
/**
 * *_strcat - a function that concatenates two strings.
 * @dest: variable to hold the string
 * @src: varible to hold the string
 * Return: returns a pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	{
		dest_len++;
	}
	for (index = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);
}
