#include "search_algos.h"

/**
 * linear_search - a function that perfroms linear search on a list
 * @array: array
 * @size: number of elements of array
 * @value: value to search for
 * Return: index of value in list or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	if (i == (size - 1) && array[i] != value)
		return (-1);
	return (-1);
}
