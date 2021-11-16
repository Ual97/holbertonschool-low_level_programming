#include "lists.h"

/**
 * listint_len - a function that returns the number of elements on linked list
 * @h: struct input
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
