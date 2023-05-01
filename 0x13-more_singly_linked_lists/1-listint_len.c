#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the pointer.
 * Return: num
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		++num;
	}
	return (num);
}
