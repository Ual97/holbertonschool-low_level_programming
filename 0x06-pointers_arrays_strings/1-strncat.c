#include "main.h"

/**
  * *_strncat - a function that concatenates 2 strings limited by n
  *@dest: dest string
  *@src: source string
  *@n: n is the limiter for the src string
  *Return: strncat strings
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
