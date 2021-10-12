#include "main.h"

/**
*print_rev - function gives last digit form SRAND
*@s: input
*Return: 0
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != 0;)
	{
		i++;
	}
	for (i--; s[i] >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
