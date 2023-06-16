#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: the head node
 *
 * Return: function that prints all the elements of a dlistint_t list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count;
	const dlistint_t *current;

	count = 0;
	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
