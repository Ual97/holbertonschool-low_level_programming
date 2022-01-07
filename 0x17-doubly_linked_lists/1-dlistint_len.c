#include "lists.h"

/**
 * dlistint_len - a function that returns a dlinked list length
 * @h: struct of linked list
 * Return: number of linked lists
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}