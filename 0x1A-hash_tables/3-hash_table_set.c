#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * create_hash_node - creates a new hash node
 * @key: key for the node
 * @value: for the node
 *
 * Return: New node, or NULL on failure
 */
hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		return (NULL);
	}
	node->next = NULL;
	return (node);
}


/**
 * hash_table_set - sets  Key to a value in hash table
 * @ht: Hash table to add an element to
 * @key: Key for data
 * @value: Stores data
 *
 * Return: 1 for success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int slot;
	hash_node_t *new_node, *tmp;
	char *n_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	slot = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[slot];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			n_value = strdup(value);
			if (n_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = n_value;
			return (1);
		}
		tmp = tmp->next;
	}
	new_node = make_hash_node(key, value);
	if (new_node == NULL)
		return (0);
	new_node->next = ht->array[slot];
	ht->array[slot] = new_node;
	return (1);
}
