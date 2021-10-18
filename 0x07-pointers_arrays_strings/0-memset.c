#include "main.h"

/**
 *_memset - a function that fills n bytes of memory pointed b *s
 *@s: input string
 *@b: constant byte
 *@n: n bytes we want to fill
 *Return: pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;
	int size = n;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			s[i] = b;
		}
	}
	return (s);
}
