#include "hash_tables.h"

/**
* key_index - returns index of a key in hash table
* @key: key to check
* @size: size of the hash table
*
* Return: index of key
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	if (size == 0)
		return (0);

	return (hash % size);
}
