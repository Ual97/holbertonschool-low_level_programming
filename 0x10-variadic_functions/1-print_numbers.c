#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_numbers - a function that prints numbers
 *@n: the max number of arguments
 *@...: variadic argument
 *@separator: a separator char ','
 *Return: sum of all arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int temp;

	if (separator == NULL)
		return;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		temp = va_arg(ptr, int);
		printf("%d", temp);
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
}
