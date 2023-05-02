#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the pointer
 * @idx: the index of the list where the new node should be added.
 * @n: the new node
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *tmp = *head;
	listint_t *new_node;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && tmp != NULL; ++x)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL && idx != 0)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
