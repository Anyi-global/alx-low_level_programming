#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list
 * @head: head pointer to the first node in the list
 *
 * Return: returns the address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *s, *f;

	s = head;
	f = head;
	if (head == NULL)
	{
		return (NULL);
	}
	while (s && f && f->next)
	{
		f = f->next->next;
		s = s->next;
		if (f == s)
		{
			s = head;
			while (s != f)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
