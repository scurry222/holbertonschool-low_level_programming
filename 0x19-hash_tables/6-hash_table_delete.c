#include "hash_tables.h"

/**
* hash_table_delete - deletes and frees a hash table
* @ht: table to delete
*
* Return: void
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp = NULL, *curr = NULL;

	if (!ht || !ht->array || !ht->size)
		return;

	for (i = 0; i < ht->size; i++)
	{
		for (curr = ht->array[i]; curr; curr = temp)
		{
			temp = curr->next;
			free(curr->key);
			free(curr->value);
			free(curr);
		}
	}

	free(ht->array);
	free(ht);
}
