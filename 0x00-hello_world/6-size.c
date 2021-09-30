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

	printf("Size of a char : %c Byte(s)\n", sizeof(charsize));
	printf("Size of an int : %d Byte(s)\n", sizeof(intsize));
	printf("Size of a long int : %ld Byte(s)\n", sizeof(longintsize));
	printf("Size of a long long int : %lld Byte(s)\n", sizeof(longlongintsize));
	printf("Size of a float : %f Byte(s)\n", sizeof(floatsize));
	return (0);
}
