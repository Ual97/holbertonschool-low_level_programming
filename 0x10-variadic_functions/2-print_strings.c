#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_strings - a function that prints strings from argument variadic arg
 *@n: the max number of arguments
 *@...: variadic argument
 *@separator: delimeter for strings
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator != NULL)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
