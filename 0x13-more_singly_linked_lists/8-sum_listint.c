#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n)
 * of a listint_t linked list
 * @head: head pointer to the first node
 *
 * Return: sum of the data contained in the nodes
 */

int sum_listint(listint_t *head)
{
	int data_sum;
	listint_t *temp;

	data_sum = 0;
	temp = head;
	while (temp != NULL)
	{
		data_sum += temp->n;
		temp = temp->next;
	}
	return (data_sum);
}
