#include "lists.h"
/**
 * list_len - a functions that returns number of elements in list_s list
 * @h: the head pointer to the first node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
