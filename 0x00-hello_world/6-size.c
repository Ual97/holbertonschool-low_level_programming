#include<stdio.h>
/**
*main-function displays text using printf
*Return: 0
*/
int main(void)
{
	int intsize;
	float floatsize;
	char charsize;
	long int longintsize;
	long long int longlongintsize;

	printf("Size of a char: %zu byte(s)\n", sizeof(charsize));
	printf("Size of an int: %zu byte(s)\n", sizeof(intsize));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longintsize));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongintsize));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatsize));
	return (0);
}
