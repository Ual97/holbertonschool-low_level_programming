#include "main.h"

/**
*_isupper - a function gives last digit form SRAND
*@c: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
