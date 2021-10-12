#include "main.h"

/**
*swap_int - function gives last digit form SRAND
*@b: input 1
*@a: input 2
*Return: 0
*/

void swap_int(int *a, int *b)
{
	int aa = *a;
	int bb = *b;

	*b = aa;
	*a = bb;
}
