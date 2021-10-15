#include "main.h"

/**
 *leet - a function that replaces certain letters for numbers
 *@n: string input
 *Return: tranlated string
 */

char *leet(char *n)
{
	int i, j;
	int ltr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int nmr[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; n[i] != 0; i++)
	{
		for (j = 0; ltr[j] != 0; j++)
		{
			if (n[i] == ltr[j])
			{
				n[i] = nmr[j];
			}
		}
	}
	return (n);
}
