#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_get - retrieves  value that is associated with a key
 * @ht: Pointer retrieves value from
 * @key: Finds value
 *
 * Return: value with key, or NULL if key not present
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int slot;
	hash_node_t *t;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	slot = key_index((const unsigned char *)key, ht->size);
	t = ht->array[slot];
	while (t != NULL)
	{
		if (strcmp(t->key, key) == 0)
			return (t->value);
		t = t->next;
	}
	return (NULL);
}
