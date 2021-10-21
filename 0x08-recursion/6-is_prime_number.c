#include "main.h"

/**
*isPrime - a function that returns 1 if prime or 0 if not
*@n: input number
*@i: int i
*Return: 1 or 0
*/

int isPrime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + isPrime(n, i + 1));
}
/**
 *is_prime_number - a function that returns 1 if prime or 0 if not
 *@n: input number
 *Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (isPrime(n, 2));
}
