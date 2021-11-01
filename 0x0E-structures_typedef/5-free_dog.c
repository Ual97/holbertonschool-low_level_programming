#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - a function that frees dogg struct
 * @d: struct to free
 * Return: 0 (void)
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
