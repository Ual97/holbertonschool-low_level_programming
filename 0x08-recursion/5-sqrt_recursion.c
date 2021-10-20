#include "main.h"
/**
 *square_root - a function that returns the sqrt of a number
 *@n: input int
 *@i: input i
 *Return: the value of the sqrt
 */

int square_root(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
			return (i);
		else
			return (-1);
	}
	return (0 + square_root(n, i + 1));
}
/**
 *_sqrt_recursion - a function that returns the sqrt of a number
 *@n: input int
 *Return: the value of the sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (square_root(n, 2));
}
