#include "lists.h"

/**
 * pop_listint - main function
 * @head: pointer.
 * Return: result
 */

int pop_listint(listint_t **head)
{
	int delnode;
	listint_t *k;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;

	delnode = tmp->n;
	k = tmp->next;
	free(tmp);
	*head = k;

	return (delnode);
}
