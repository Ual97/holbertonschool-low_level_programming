#include "main.h"

/**
*_puts - function gives last digit form SRAND
*@str: input
*Return: 0
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
