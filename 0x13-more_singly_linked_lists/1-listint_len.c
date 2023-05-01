#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a
 * linked listint_t list
 * @h: head pointer to the first node in the list
 *
 * Return: number of nodes in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes_count;

	nodes_count = 0;
	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
