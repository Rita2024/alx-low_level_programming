#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the pointer.
 * Return: result
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *x = h;
	size_t num_element;

	while (x != NULL)
	{
		num_element++;
		x = x->next;
	}
	return (num_element);
}
