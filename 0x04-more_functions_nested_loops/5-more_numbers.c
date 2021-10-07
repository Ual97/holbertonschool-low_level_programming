#include "main.h"

/**
*more_numbers - a function gives last digit form SRAND
*Return: x10 a-z
*/

void more_numbers(void)
{

	int i, n;

	n = 0;

	while (n < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
			}
			_putchar((i % 10) + 48);
		}
		n++;
		_putchar('\n');
	}
}
