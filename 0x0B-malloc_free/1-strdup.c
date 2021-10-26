#include "main.h"
#include <stdlib.h>

/**
 *_strdup - a function that returns a pointer to a new string which is
 * a duplicate of the string str.
 *@str: string input
 *Return: NULL if str = NULL and a pointer if if succesful
 */

char *_strdup(char *str)
{
	char *t;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (j = 0; j <= *str; j++)
	{
	}
	t = malloc(sizeof(char) * j);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		t[i] = str[i];
	return (t);
}
