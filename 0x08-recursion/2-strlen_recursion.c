#include "main.h"

/**
*_strlen_recursion - function that prints the number of chars in a string
*@s: input
*Return: number of chars
*/

int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
