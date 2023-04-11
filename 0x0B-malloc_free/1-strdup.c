#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 * memory,which contains a copy of the string given as a parameter.
 * @str: the string to be duplicated
 *
 * Return: returns a pointer to the duplicated string on success
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	dup = (char *) malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
