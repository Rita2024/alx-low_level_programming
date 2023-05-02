#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: the pointer.
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h = head;

	while (h != NULL)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
