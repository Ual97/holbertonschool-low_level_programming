#include "main.h"

/**
*_isdigit - a function gives last digit form SRAND
*@c: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
