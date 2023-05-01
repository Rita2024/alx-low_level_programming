#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: the pointer.
 * Return: result
 */

void free_listint(listint_t *head)
{
	listint_t *nnode = head;

	while (nnode != NULL)
	{
		listint_t *nodes = nnode;

		nnode = nnode->next;
		free(nodes);
	}
}
