#include "main.h"

/**
*_islower - a function gives last digit form SRAND
*@c: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
