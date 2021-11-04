#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *sum_them_all - a functions that sums all its passed arguments
 *@n: the max number of arguments
 *@...: variadic argument
 *Return: sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	int sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
