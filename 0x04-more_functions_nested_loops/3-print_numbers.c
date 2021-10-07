#include "main.h"

/**
*print_numbers - function gives last digit form SRAND
*Return: 0
*/

void print_numbers(void)
{

	char *ch = "0123456789";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar ('\n');
}
