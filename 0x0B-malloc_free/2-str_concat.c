#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - a function that concatenates two strings
 * @s1: First string to concatenate
 * @s2: Second string to concatenate
 *
 * Return: returns pointer to the newly allocated space in memory
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2;
	char *result;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *) malloc((len1 + len2 + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
