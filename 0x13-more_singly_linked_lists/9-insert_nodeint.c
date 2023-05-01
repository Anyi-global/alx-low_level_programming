#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 * position
 * @head: head pointer to pointer to the first node in the list
 * @idx: index of the list where the new node should be added.
 * Index starts at 0
 * @n: the data value to be passed to the node
 *
 * Return: returns the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node;
	listint_t *temp;

	temp = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || head == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}
