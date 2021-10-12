#include "main.h"

/*
*puts_half - prints half of  a string
*@str: string input
*/

void puts_half(char *str)
{
	int i = 0;
	int n;

	while (*(str + i) != '\0')
		i++;

	n = (i / 2);

	if ((i % 2) == 0)
	{
		for (i = n; str[i]; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = (n + 1); str[i]; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
