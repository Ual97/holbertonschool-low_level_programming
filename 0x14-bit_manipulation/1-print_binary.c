#include "main.h"

/**
 * print_binary - prints a number in binary from decimal form
 * @n: input decimal
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned int copy = n;
	int len = 0;

	while (copy > 0)
	{
		len++;
		copy = copy >> 1;
	}
	len -= 1;

	if (n == 0)
		_putchar('0');

	while (len >= 0)
	{
		if ((n >> len) & 1)
			_putchar('1');
		else
			_putchar('0');
		len--;
	}
}
