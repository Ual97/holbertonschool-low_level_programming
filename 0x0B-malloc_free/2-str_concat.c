#include <stdlib.h>
#include "main.h"

/**
 *str_concat - a function that concatenates 2 strings
 *@s1: first input string
 *@s2: second input string
 *Return: NULL on failure and and both strings if successful
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, p;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != '\0'; j++)
		;
	for (k = 0; s2[k] != '\0'; k++)
		;
	conc = malloc(sizeof(char) * (j + k + 1));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		conc[i] = s1[i];
	p = k;
	for (k = 0; k <= p; i++, k++)
		conc[i] = s2[k];
	return (conc);
}
