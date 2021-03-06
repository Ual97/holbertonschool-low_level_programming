#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a given key
 * @key: the key
 * @size: size of the hash table array
 * Return: index where key is stored in hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	if (size == 0)
	{
		return (0);
	}
	index = hash_djb2(key);
	return (index % size);
}
