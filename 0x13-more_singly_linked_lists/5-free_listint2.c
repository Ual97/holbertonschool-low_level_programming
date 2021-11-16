#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 * @head: head pointer address
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
