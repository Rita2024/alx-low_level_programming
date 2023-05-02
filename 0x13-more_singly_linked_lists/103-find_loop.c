#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: the pointer.
 * Return: the address of the node where the loop starts or
 * NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *h;
	listint_t *tmp;

	h = head;
	tmp = head;
	while (head && h && h->next)
	{
		head = head->next;
		h = h->next->next;

		if (head == h)
		{
			head = tmp;
			tmp =  h;
			while (1)
			{
				h = tmp;
				while (h->next != head && h->next != tmp)
				{
					h = h->next;
				}
				if (h->next == head)
					break;

				head = head->next;
			}
			return (h->next);
		}
	}

	return (NULL);
}
