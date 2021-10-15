#include "main.h"
/**
 **cap_string - a function that capitalizes all words of a string
 *@n: input string
 *Return: capitalized string
 */
char *cap_string(char *n)
{
	int i, j;
	int separators[] = {',', ';', '.', '?', '"', '(', ')',
		'{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != 0; i++)
	{
		if (n[0] >= 97 && n[i] <= 122)
		{
			n[i] = n[i] - 32;
		}
		for (j = 0; separators[j] != 0; j++)
		{
			if (n[i] == separators[j])
			{
				if (n[i + 1] >= 97 && n[i + 1] <= 122)
				{
					n[i + 1] = n[i + 1] - 32;
				}
			}
		}
	}
	return (n);
}
