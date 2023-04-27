#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the linked list_t list
 * Return: the number of elements in h
 */

size_t list_len(const list_t *h)
{
	const list_t *current_node = h;
	size_t node_count = 0;

	while (current_node != NULL)
	{
		node_count++;
		current_node = current_node->next;
	}
	return (node_count);
}
