#include "function_pointers.h"

/**
 * int_index - a function that searches for and integer
 * @size: size of array
 * @array: array input
 * @cmp: pointer to function
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);
	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
