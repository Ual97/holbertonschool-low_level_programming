#include "lists.h"

/**
 * print_listint - a function that prints the elemnts of a linked list
 * @h: struct input
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t length;

	length = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}
