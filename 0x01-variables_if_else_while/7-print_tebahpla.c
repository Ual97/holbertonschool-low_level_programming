#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main-function gives last digit form SRAND
*Return: 0
*/

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; --ch)
	{
		putchar (ch);
	}
	putchar ('\n');
	return (0);
}
