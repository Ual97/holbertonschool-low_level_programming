#include <stdlib.h>
#include <stdio.h>

/**
*main - a function gives last digit form SRAND
*Return: 0 if c is lowercase and 0 otherwise
*/

int main(void)
{
	int i;
	char b[] = "Buzz";
	char f[] = "Fizz";
	char fb[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s ", b);
		}
		else if ((i % 3 == 0) && (i  % 5 == 0))
		{
			printf("%s ", fb);
		}
		else if (i % 5 == 0)
		{
			printf("%s ", b);
		}
		else if (i % 3 == 0)
		{
			printf("%s ", f);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
