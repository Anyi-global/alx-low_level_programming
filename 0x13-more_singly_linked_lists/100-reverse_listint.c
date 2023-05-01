#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: head pointer to pointer to the first node
 *
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	prev_node = NULL;
	next_node = NULL;
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next_node;
	}
	*head = prev_node;
	return (*head);
}
