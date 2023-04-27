#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p = malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}

	p->str = strdup(str);

	if (p->str == NULL)
	{
		free(p);
		return (NULL);
	}

	p->len = strlen(str);
	p->next = NULL;

	if (*head == NULL)
	{
		*head = p;
	}
	else
	{
		list_t *current_node = *head;

		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}

		current_node->next = p;
	}
	return (p);
}
