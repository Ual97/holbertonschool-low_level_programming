#include "main.h"
#include <stdlib.h>

/**
 **alloc_grid - a function that prints a 2d array of 0´s
 *@width: input width for array
 *@height: input height for array
 *Return: NULL if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ar;

	if (width <= 0 || height <= 0)
		return (NULL);
	ar = malloc(sizeof(int) * height);
	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ar[i] = malloc(sizeof(int) * width);
		if (ar[i] == NULL)
		{
			free(ar[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}
	return (ar);
}
