#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a
 * dlistint_t list
 * @head: double pointer to the head
 * @n: the value to be inserted into the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
	return (new_node);
}
