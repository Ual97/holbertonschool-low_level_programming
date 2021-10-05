#include "main.h"

/**
*main-function gives last digit form SRAND
*Return: 0
*/

void print_alphabet(void)
{

	char *ch = "abcdefghijklmnopqrstuvwxyz";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	_putchar ('\n');
}
