#include "search_algos.h"

/**
 * print_arr - prints array
 * @array: array
 * @l: left index
 * @r: right index
 * Return: void
 */
void print_arr(int *array, size_t l, size_t r)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		if (i != r)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - a function that perfroms binary search on a sorted array
 * @array: array
 * @size: number of elements of array
 * @value: value to search for
 * Return: index of value in list or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, i;

	left = 0;
	right = size - 1;
	if (!array)
		return (-1);
	while (left <= right)
	{
		print_arr(array, left, right);
		i = ((right + left) / 2);
		if (array[i] < value)
			left = i + 1;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
	}
	return (-1);
}
