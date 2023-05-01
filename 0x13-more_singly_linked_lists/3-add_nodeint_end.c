#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: the head of a link.
 * @n: the element.
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nnode;
	listint_t *end = *head;

	nnode = malloc(sizeof(listint_t));
	if (nnode == NULL)
	{
		return (NULL);
	}
	nnode->n = n;
	nnode->next = NULL;
	if (*head == NULL)
	{
		*head = nnode;
		return (nnode);
	}
	while (end->next != NULL)
	{
		end = end->next;
	}

	end->next = nnode;

	return (nnode);
}
