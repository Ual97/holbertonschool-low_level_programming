#include <stdlib.h>
#include "main.h"

/**
 *string_nconcat - a function that concatenates 2 strings
 *@s1: first input string
 *@s2: second input string
 *@n: bytes to stop at s2
 *Return: NULL on failure and and both strings if successful
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, o;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (j = 0; s1[j] != 0; j++)
		;
	for (k = 0; s2[k] != 0; k++)
		;
	conc = malloc(sizeof(char) * (j + k + 1));
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < j; i++)
		conc[i] = s1[i];
	o = k;
	for (k = 0; k <= o || k <= n; i++, k++)
		conc[i] = s2[k];
	return (conc);
}
