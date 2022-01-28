#include "hash_tables.h"

/**
 * hash_table_set - a function that adds a new element to a hash table
 * @ht: hash table
 * @key: key value
 * @value: value associated to key
 * Return: 1 if success, 0 otheriwse
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;

	if (ht == NULL)
	{
		return (0);
	}
	if (key == NULL || *key == '\0')
	{
		return (0);
	}
	key_idx = key_index((unsigned char *)key, ht->size);
	if (add_ht_node(&(ht->array[key_idx]), key, value) == NULL)
		return (0);
	return (1);
}

/**
 * add_ht_node - adds a node at the beginning of a hash table
 *
 * @ht: pointer to hash table
 * @key: key of the hash
 * @value: value to store
 * Return: new node
 */

hash_node_t *add_ht_node(hash_node_t **ht, const char *key, const char *value)
{
	hash_node_t *new_node, *tmp;

	tmp = *ht;
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node || key == NULL)
	{
		return (NULL);
	}
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = *ht;
	*ht = new_node;
	return (new_node);
}
