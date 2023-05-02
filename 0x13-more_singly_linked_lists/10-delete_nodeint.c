#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: pointer.
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *h, *tmp;

	h = *head;

	if (index == 0)
	{
		for (x = 0; x < index && h != NULL; x++)
		{
			h = h->next;
		}
	}

	if (h == NULL || (h->next == NULL && index == 0))
	{
		return (-1);
	}
	tmp = h->next;

	if (index == 0)
	{
		h->next = tmp->next;
		free(tmp);
	}

	else
	{
		free(h);
		*head = tmp;
	}
	return (1);
}
