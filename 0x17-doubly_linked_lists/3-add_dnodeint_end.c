#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *end_new;

	end_new = malloc(sizeof(dlistint_t));

	if (end_new == NULL)
		return (NULL);

	end_new->n = n;
	end_new->next = NULL;

	if (h != NULL)
	{
		while (h->next != NULL)
			h = h->next;
		h->next = end_new;
	}
	else
	{
		*head = end_new;
	}
	end_new->prev = h;
	return (end_new);
}
