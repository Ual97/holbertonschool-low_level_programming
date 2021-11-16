#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at a given posi
 * @head: head address
 * @idx: index for new node
 * @n: value for the data of new index
 * Return: address of new node or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	idx--;
	while (idx != 1)
	{
		temp = temp->next;
		idx--;
	}
	ptr->next = temp->next;
	temp->next = ptr;
	return (ptr);
}
