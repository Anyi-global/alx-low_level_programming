#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a
 * listint_t linked list.
 * @head: head pointer
 * @index: index of the nodes, starting at 0
 *
 * Return: the node at nth index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	i = 0;
	temp = head;
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}
