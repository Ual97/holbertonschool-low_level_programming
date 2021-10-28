#include <stdlib.h>
#include "main.h"

/**
 *_calloc - a function that allocates memory for an array (0)
 *@nmemb: number of elements for the array
 *@size: size in bytes of each element
 *Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p;

	if ((nmemb || size) == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (size * nmemb); i++)
		p[i] = 0;
	return (p);
}
