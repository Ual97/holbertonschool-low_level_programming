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

	if (separator == NULL)
		return;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, const unsigned int));
		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
