#include "main.h"

/**
 * get_endianness - check endianness
 * Return: 1 if big or 0 if little
 */

int get_endianness(void)
{
	int x = 0x00001;
	char *c = (char *)&x;
	return (c[0]);
}
