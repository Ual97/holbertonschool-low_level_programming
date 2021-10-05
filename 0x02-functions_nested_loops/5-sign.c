#include "main.h"

/**
*print_sign - a function gives last digit form SRAND
*@n: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

int print_sign(int n)
{
	if (n > '0')
	{
		return (1);
		_putchar('+');
	}
	else if (n == '0')
	{
		return (0);
		_putchar('0');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
