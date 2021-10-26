#include "main.h"
#include <stdlib.h>

/**
 *create_array - a function that prints and array of chars and initializes it
 *@size: input size
 *@c: input char
 *Return: NULL if if size = 0, or a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
