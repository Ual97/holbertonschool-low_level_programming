#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *print_all - a function that prints anything :D
 *@format: types of arguments
 *Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0, j = 0;
	char *str;
	char *sep = ", ";
	va_list ptr;

	va_start(ptr, format);
	while (format && format[i])
		i++;
	while (format && format[j])
	{
		if (j == (i - 1))
			sep = "";
		switch (format[j])
		{
			case 'c':
				printf("%c%s", va_arg(ptr, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(ptr, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ptr, double), sep);
				break;
			case 's':
				str = va_arg(ptr, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", str, sep);
				break;
		}
		j++;
	}
	printf("\n");
	va_end(ptr);
}
