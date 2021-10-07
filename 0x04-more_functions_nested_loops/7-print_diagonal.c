#include "main.h"

/**
*print_diagonal - a function gives last digit form SRAND
*@n: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
