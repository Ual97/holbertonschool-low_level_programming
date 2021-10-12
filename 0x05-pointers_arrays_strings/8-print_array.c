#include "main.h"
#include <stdio.h>

/**
  *print_array - a function that prints arrays in order
  *@a: array input
  *@n: n input
  */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
