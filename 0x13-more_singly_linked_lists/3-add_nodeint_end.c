#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of list
 * @head: head pointer address
 * @n: data int n
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *temp;

	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
		return (NULL);
	endnode->n = n;
	endnode->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = endnode;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = endnode;
	}
	return (*head);
}
