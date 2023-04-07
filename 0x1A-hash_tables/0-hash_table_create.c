#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_create - This creates a hash table.
 * @size: Represents the size of an array.
 *
 * Return:A newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashTable;
	unsigned long int y = 0;

	hashTable = malloc(sizeof(hash_table_t));
	if (hashTable == NULL)
		return (NULL);
	hashTable->size = size;
	hashTable->array = malloc(size * sizeof(hash_node_t *));
	if (hashTable->array == NULL)
	{
		free(hashTable);
		return (NULL);
	}
	for ( ; y < size; y++)
		hashTable->array[y] = NULL;
	return (hashTable);
}