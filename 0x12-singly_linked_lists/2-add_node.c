#include "lists.h"
/**
 * add_node - a function that adds a new node at the beggining
 * @head: head pointer
 * @str: string
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head;
	size_t index;

	new_head = malloc(sizeof(list_t));
	if (new_head == NULL)
		return (NULL);

	new_head->str = strdup(str);
	for (index = 0; str[index]; index++)
		;
	new_head->len = index;
	new_head->next = *head;
	*head = new_head;
	return (*head);
}
