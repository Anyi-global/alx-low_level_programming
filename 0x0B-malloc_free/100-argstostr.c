#include <stdlib.h>
#include "main.h"
/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: returns a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, total_length = 0;
	char *result;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			total_length++;
		}
		total_length++;
	}

	result = (char *) malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[k] = av[i][j];
			k++;
		}
		result[k] = '\n';
		k++;
	}
	result[k] = '\0';
	return (result);
}
