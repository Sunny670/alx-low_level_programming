#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table to delete
 *
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int z;
	hash_node_t *next_node;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (z = 0; z < ht->size; z++)
	{
		while (ht->array[z] != NULL)
		{
			next_node = ht->array[z]->next;
			free(ht->array[z]->key);
			free(ht->array[z]->value);
			free(ht->array[z]);
			ht->array[z] = next_node;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
