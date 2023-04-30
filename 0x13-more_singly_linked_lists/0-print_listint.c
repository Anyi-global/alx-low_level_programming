#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: head pointer to the first node in the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_num;

	nodes_num = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes_num++;
		h = h->next;
	}
	return (nodes_num);
}
