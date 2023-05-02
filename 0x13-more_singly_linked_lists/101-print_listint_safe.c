#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: the pointer.
 * Return: the number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *h = head, *list = NULL;
	size_t i = 0;

	while (h != NULL)
	{
		printf("[%p] %d\n", (void *)h, h->n);
		i++;

		if (h->next >= h)
		{
			list = h;
			break;
		}
		h = h->next;
	}

	if (list != NULL)
	{
		printf("[%p] %d\n", (void *)list, list->n);
		i++;
	}

	return (i);
}
