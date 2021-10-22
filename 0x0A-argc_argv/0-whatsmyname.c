#include <stdio.h>
#include "main.h"

/**
 *main - function that prints its name
 *Return: 0
 */

int main(int argc, char* argv[])
{
	if (argc < 5)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
