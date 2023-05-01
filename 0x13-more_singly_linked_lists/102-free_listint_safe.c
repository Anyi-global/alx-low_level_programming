#include "lists.h"
/**
 * free_listint_safe - function that frees a listint_t list
 * @h: head pointer to the first node
 *
 * Return: the size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t length;
	listint_t *temp;
	int diff;

	length = 0;
	if (h == NULL || *h == NULL)
	{
		return (0);
	}
	while (*h != NULL)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
