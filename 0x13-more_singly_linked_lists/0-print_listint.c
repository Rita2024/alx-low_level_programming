#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		++x;
		h = h->next;
	}
	return (x);
}
