#include "main.h"

/**
 * flip_bits - a function that returns numbers of bits needed to go
 * from one number to another
 * @n: number 1
 * @m: number 2
 * Return: number of bits from 1 to 2
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;
	unsigned long int bits;

	bits = n ^ m;
	while (bits > 0)
	{
		diff += (bits & 1);
		bits >>= 1;
	}
	return (diff);
}


