#include "main.h"

/**
 * binary_to_uint - a function that converts binary to unsigned int
 * @b: input binary
 * Return: converted number or 0 if b is NULL or any char that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, sum = 0, j = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i -= 1;
	while (b[j])
	{
		if ((b[j] != '0') && (b[j] != '1'))
			return (0);
		if (b[j] == '1')
			sum += (1 * (1 << i));
		j++;
		i--;
	}
	return (sum);
}
