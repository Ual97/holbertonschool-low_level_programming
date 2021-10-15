#include "main.h"

/**
 *reverse_array - a function that reverses 2 int arrays
 *@a: the string we want to reverse
 *@n: number of elements of the array
 *Return: 0 always
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
