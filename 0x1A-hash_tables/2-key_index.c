#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "hash_tables.h"

/**
 * key_index -  Index of a key
 * @key: Key for getting the index for
 * @size: Size of hash table
 *
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size); /*call the hash_djb2 function*/
}
