#include "main.h"
/**
 *square_root - a function that returns the sqrt of a number
 *@n: input int
 *@i: input i
 *Return: the value of the sqrt
 */

int square_root(int n, int i)
{
	if (i < 1)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (square_root(n, i - 1));
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
	else
		return (square_root(n, (n + 1) / 2));
}
