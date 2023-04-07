#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints the hash table
 * @ht: hash table 
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int a;
	hash_node_t *t_node;
	char j = 0; /*null value in the start*/

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (a = 0; a < ht->size; a++)
	{
		t_node = ht->array[a];
		while (t_node != NULL)
		{
			if (j == 1)
				printf(", ");
			printf("'%s': '%s'", t_node->key, t_node->value);
			j = 1;
			t_node = t_node->next;
		}
	}
	printf("}\n");
}