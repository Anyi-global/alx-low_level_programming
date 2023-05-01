#include "lists.h"
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to the first node
 *
 * Return: returns the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *n_temp, *n_list;
	size_t count;
	size_t n_new;

	n_temp = NULL;
	n_list = NULL;
	count = 0;

	n_temp = head;
	while (n_temp != NULL)
	{
		printf("[%p] %d\n", (void *)n_temp, n_temp->n);
		count++;
		n_temp = n_temp->next;
		n_list = head;
		n_new = 0;
		while (n_new < count)
		{
			if (n_temp == n_list)
			{
				printf("-> [%p] %d\n", (void *)n_temp, n_temp
						->n);
				return (count);
			}
			n_list = n_list->next;
			n_new++;
		}
		if (head == NULL)
		{
			exit(98);
		}
	}
	return (count);
}
