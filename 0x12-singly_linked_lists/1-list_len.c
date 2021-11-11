#include "lists.h"

/**
 * list_len - a function that returns the number of elementes in a linked list
 * @h: pointer to struct list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elenum = 0;

	while (h != NULL)
	{
		h = h->next;
		elenum++;
	}
	return (elenum);
}
