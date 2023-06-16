#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int a = 0;
	dlistint_t *curr;

	curr = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = curr->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(curr);
		return (1);
	}

	while (curr != NULL && a < index)
	{
		curr = curr->next;
		++a;
	}
	if (curr == NULL)
	{
		return (-1);
	}
	curr->prev->next = curr->next;

	if (curr->next != NULL)
	{
		curr->next->prev = curr->prev;
	}
	free(curr);
	return (1);
}
