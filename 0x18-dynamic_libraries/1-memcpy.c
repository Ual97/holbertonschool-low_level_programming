#include "main.h"

/**
 *_memcpy - a function that fills n bytes of memory pointed b *s
 *@dest: destination string
 *@src: source string
 *@n: n bytes we want to copy
 *Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int size = n;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
