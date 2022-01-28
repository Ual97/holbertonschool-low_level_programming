#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a node at the end of a DLL
 * @head: pointer to head
 * @n: data value
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *last;

    new_node = malloc(sizeof(struct dlistint_s));
    if (new_node == NULL)
        return (NULL);
    last = *head;
    new_node->n = n;
    new_node->next = NULL;
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        new_node->prev = NULL;
        return (new_node);
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
    return (new_node);
}