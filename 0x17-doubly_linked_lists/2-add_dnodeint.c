#include "lists.h"

/**
 * add_dnodeint - a function that adds a node at the begginning of the list
 * @head: head pointer
 * @h: struct of DLL
 * Return address of new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *newhead;

    if (head == NULL)
        return (NULL);
    newhead = malloc(sizeof(struct dlistint_s));
    if (newhead == NULL)
    {
        return (NULL);
    }
    newhead->n = n;
    if (*head == NULL)
    {
        *head = newhead;
        newhead->next = NULL;
        newhead->prev = NULL;
        return (newhead);
    }
    newhead->next = *head;
    newhead->prev = NULL;
    if (head != NULL)
    {
        (*head)->prev = newhead;
    }
    *head = newhead;
    return (newhead);
}