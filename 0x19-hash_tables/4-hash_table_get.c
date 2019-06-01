#include "hash_tables.h"

/**
* hash_table_get - get value from hash table
* @ht: hash table
* @key: key to find value at
*
* Return: value of element if found, NULL on failure
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *ukey = NULL;
	hash_node_t *head = NULL;

	if (!ht)
		return (NULL);

	ukey = (unsigned char *)key;

	index = key_index(ukey, ht->size);

	head = (ht->array)[index];

	while (head)
	{
		if (!strcmp(head->key, key))
			return (head->value);
		head = head->next;
	}

	return (NULL);
}
