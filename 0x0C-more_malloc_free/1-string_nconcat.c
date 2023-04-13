#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: the first string to be concatenated
 * @s2: the secod string to be concatenated
 * @n: n number of bytes of s2 to be appended to s1
 * Return: a pointer to the memory space to hold the string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n){
	char *ptr;
	unsigned int s1_len, s2_len, ptr_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}
	ptr_len = s1_len + n + 1;
	ptr = malloc(ptr_len * sizeof(char));

	if (ptr == NULL)
	{
		return (NULL);
	}
	strncpy(ptr, s1, s1_len);
	strncat(ptr, s2, n);

	ptr[ptr_len - 1] = '\0';
	return (ptr);
}
