#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: A pointer to the head of the list_t list
 * Return: The number of nodes in the list_t list
 */

size_t print_list(const list_t *h)
{
	const list_t *current_node = h;
	size_t node_count = 0;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current_node->len, current_node->str);
		}
		node_count++;
		current_node = current_node->next;
	}
	return (node_count);
}
