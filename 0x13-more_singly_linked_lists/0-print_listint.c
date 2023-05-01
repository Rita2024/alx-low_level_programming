#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: the pointer
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	const listint_t *x = h;

	while (x != NULL)
	{
		printf("%d\n", x->n);
		node++;
		x = x->next;
	}

	return (node);
}
