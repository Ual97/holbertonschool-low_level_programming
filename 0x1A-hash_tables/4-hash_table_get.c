#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value from a key
 * @ht: hash table
 * @key: key you are looking for
 * Return: Value associated to key, or NULL if it could not be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	tmp = (ht->array)[idx];
	while (tmp != NULL && strcmp(tmp->key, key) != 0)
	{
		tmp = tmp->next;
	}
	if (!tmp)
		return (NULL);
	else
		return (tmp->value);
}