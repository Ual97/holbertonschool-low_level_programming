#include "main.h"

/**
 * get_bit - a function that returns a bit given by an index
 * @n: long int input
 * @index: index
 * Return: bit at given index or -1 if error occurrs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int maxindex;

	maxindex = (64);
	if (index > maxindex)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
