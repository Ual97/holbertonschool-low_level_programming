#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beggining of list
 * @n: struct input
 * @head: head address
 * Return: address of new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL)
		return (NULL);
	newhead->n = n;
	newhead->next = *head;
	*head = newhead;
	return (*head);
}
