#include "lists.h"

/**
 * free_listint - a function that frees a linked list
 * @head: head address
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current);
	}
}
