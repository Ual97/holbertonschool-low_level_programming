#include <stdio.h>
#include "main.h"

/**
 *main - function that counts number of arguments
 *@argc: argument count
 *@argv: argument vector
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
		}
	}
	i = i - 1;
	printf("%d\n", i);
	return (0);
}
