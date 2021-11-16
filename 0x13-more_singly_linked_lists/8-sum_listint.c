#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the elements
 * @head: head address
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr = head;
	int sum = 0;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
