#include "main.h"

/**
 *factorial - a function that prints the factorial of a number
 *@n: input int
 * Return: factorial
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}