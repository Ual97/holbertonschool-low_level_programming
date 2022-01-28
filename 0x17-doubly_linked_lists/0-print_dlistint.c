#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints a doubly linked list
 * @h: struct import
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t length ;

   length = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		length++;
	}
	return (length);
}