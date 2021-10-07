#include "main.h"

/**
*print_square - a function gives last digit form SRAND
*@size: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
