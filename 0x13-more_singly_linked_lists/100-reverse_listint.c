#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: the pointer.
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *h = *head;
	listint_t *next;

	listint_t *tmp = NULL;

	while (h != NULL)
	{
		next = h->next;
		h->next = tmp;
		tmp = h;
		h = next;
	}
	*head = tmp;

	return (*head);
}
