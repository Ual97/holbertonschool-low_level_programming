#include "main.h"

/**
*main-function gives last digit form SRAND
*Return: 0
*/

void print_alphabet_x10(void)
{

	int i,n;
	n = 0;
	
	while (n<10)
	{
		for(i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		n++;
		_putchar('\n');
	}
}
