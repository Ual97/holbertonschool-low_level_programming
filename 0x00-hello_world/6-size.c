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

	printf("Size of a char : %c bytes\n", sizeof(charsize));
	printf("Size of a float : %zu bytes\n", sizeof(floatsize));
	printf("Size of a long int : %zu bytes\n", sizeof(longintsize));
	printf("Size of an int : %zu bytes\n", sizeof(intsize));
	printf("Size of a long long int : %zu\n", sizeof(longlongintsize));
	return (0);
}
	
