#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a new hash table
 * @size: size of the array
 * Return: pointer to newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **array;
	hash_table_t *table;
	unsigned long int i = 0;

	if (size == 0)
	{
	return (NULL);
	}

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
	{
	return (NULL);
	}
	array = malloc(sizeof(*array) * size);
	if (array == NULL)
	{
		free (table);
		retrun (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	table->size = size;
	table->array = array;

	return (table);
}