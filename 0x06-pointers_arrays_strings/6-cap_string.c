#include "main.h"
/**
 **cap_string - a function that capitalizes all words of a string
 *@n: input string
 *Return: capitalized string
 */
char *cap_string(char *n)
{
	int i;
	int separators[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; n[i] != 0; i++)
	{
		if (n[i] == separators[])
		{
			i++;
			if (n[i] >= 97 && n[i] <= 122)
			{
				n[i] = n[i] - 32;
				break;
			}
		}
	}
	return (n);
}
