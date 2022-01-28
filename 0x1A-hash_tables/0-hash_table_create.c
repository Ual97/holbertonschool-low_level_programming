#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a new hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i = 0;

	if (size = 0)
	{
		return (NULL);
	}
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
		return (NULL);
	ht->size = size;

	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}
	return (ht);
}
