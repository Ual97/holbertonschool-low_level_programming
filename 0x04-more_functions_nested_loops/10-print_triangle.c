#include "main.h"

/**
*print_triangle - a function gives last digit form SRAND
*@size: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

void print_triangle(int size)
{
	int i;
	int j;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j <= (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for (y = 0; y <= i; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

