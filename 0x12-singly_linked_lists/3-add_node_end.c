#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the the end of the list_t list
 * @head: pointer to pointer to the first node
 * @str: the data value of the node
 *
 * Return: returns the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	dup = strdup(str);
	new_node->str = dup;
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
