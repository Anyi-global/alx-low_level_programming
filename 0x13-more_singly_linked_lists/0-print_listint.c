#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: head pointer to the first node in the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_count;

	nodes_count = 0;
	while (h)
	{
		printf("%d\n", h->n);
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
