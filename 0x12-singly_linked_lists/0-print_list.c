#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the head of the list
 *
 * Return: returns the number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t nodes_count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
