#include "main.h"

/**
*_isalpha - a function gives last digit form SRAND
*@c: the int value
*Return: 1 if c is lowercase and 0 otherwise
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
