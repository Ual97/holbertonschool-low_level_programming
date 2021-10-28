#include "main.h"
#include <stdlib.h>

/**
 *array_range - a function that creates an array of integers
 *@min: min value to be included
 *@max: max value to be inclded ( min to max)
 *Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * ((max - min) + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		p[i] = min;
	return (p);
}
