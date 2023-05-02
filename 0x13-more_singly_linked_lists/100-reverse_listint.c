#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: the pointer.
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h;
	listint_t *tmp;

	h = NULL;
	tmp = NULL;

	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = h;
		h = *head;
		*head = tmp;
	}
	*head = h;

	return (*head);
}
