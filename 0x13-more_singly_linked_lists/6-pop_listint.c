#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of a linked list
 * @head: head address of linked list
 * Return: head nodes data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int nodedata;

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	nodedata = temp->n;
	*head = (*head)->next;
	free(temp);
	return (nodedata);
}
