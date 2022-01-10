#include "main.h"
#define NULL 0

/**
  * *_strchr - a function that finds a char in a stringg
  *@s: source string
  *@c: char we want to find
  *Return: NULL if char is not found or c char if found
  */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= 0; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
