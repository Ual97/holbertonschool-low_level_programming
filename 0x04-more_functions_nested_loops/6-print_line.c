#include "main.h"

/**
*print_line - a function gives last digit form SRAND
*@n: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
			break;
	}
	_putchar('\n');
}
