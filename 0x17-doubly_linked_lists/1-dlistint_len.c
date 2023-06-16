#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked
 * dlistint_t list
 * @h: the head node
 *
 * Return: The total number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *current;

	count = 0;
	current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
