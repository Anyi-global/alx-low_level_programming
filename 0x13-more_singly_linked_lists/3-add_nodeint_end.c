#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 * of a listint_t list
 * @head: pointer to pointer to the first node in the list
 * @n: the integer value to be assigned to the node
 *
 * Return: returns the address of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
