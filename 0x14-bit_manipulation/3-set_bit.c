#include "main.h"

/**
 * set_bit - a function that sets a bit at a given index
 * @n: int input
 * @index: index
 * Return: 1 if it worked -1 if error occurrs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int maxindex;

	maxindex = (64);
	if (index > maxindex)
		return (-1);
	mask = mask << index;
	*n = *n | mask;
	return (1);
}
