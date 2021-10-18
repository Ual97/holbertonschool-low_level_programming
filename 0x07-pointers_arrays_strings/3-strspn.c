#include "main.h"

/**
 * *_strspn - a function that return the number of given from accept on s
 *@s: input string
 *@s: input string
 *@accept: contains the bytes we will match for in s
 *Return: number of bytes of s, which are in accept
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, marca;
	int count = 0;

	for (i = 0; s[i] != 0; i++)
	{
		marca = 0;

		for (j = 0; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				marca = 1;
			}
		}
		if (marca == 0)
		{
			return (count);
		}
	}
	return (count);
}
