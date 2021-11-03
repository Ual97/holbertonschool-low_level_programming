#include "function_pointers.h"

/**
 * array_iterator - a function that given parameters iterates an array
 * @size: size of array
 * @action: pointer to the "to do" action for the array
 * @array: input array
 * Retrun: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
