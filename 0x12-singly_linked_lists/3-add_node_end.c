#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the end of a list
 * @head: head of the list
 * @str: strings of each element
 * Return: address of new elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end_head;
	size_t index;
	list_t *temp;

	end_head = malloc(sizeof(list_t));
	if (end_head == NULL)
		return (NULL);

	end_head->str = strdup(str);
	for (index = 0; str[index]; index++)
		;
	end_head->len = index;
	end_head->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = end_head;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = end_head;
	}
	return (*head);
}
