#include "3-calc.h"

/**
 * op_add - a function that adds 2 ints
 * @b: int b
 * @a: int a
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a function that subtracts 2 ints
 * @a: first number
 * @b: second number.
 *
 * Return: sub
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a function that multiplies 2 ints.
 * @a: first number.
 * @b: second number.
 *
 * Return: mul.
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a function that divides 2 numbers
 * @a: first number.
 * @b: second number.
 *
 * Return: div.
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a function that returns the remainder of a division
 * @a: first number.
 * @b: second number.
 *
 * Return: mod.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
