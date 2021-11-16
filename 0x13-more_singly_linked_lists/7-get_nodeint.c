#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns a specified node of a list
 * @head: head address
 * @index: specifier for node
 * Return: data form nth node or NULL if list does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (current != NULL)
	{
		if (count == index)
			return (current);
		count++;
		current = current->next;
	}
	return (0);
}
