#include "hash_tables.h"

/**
 * print_ht - prints hash table state
 * @ht: pointer to hash table
 *
 * Return: void.
 */
void print_ht(shash_table_t *ht)
{
	printf("SHEAD: [%s]:[%s]\n", ht->shead->key, ht->shead->value);
	printf("STAIL: [%s]:[%s]\n", ht->stail->key, ht->stail->value);
}


/**
* shash_table_sort - sort the hash table
* @ht: hash table to sort
* @snode: node to add to sorted ht
*/
void shash_table_sort(shash_table_t *ht, shash_node_t *snode)
{
	shash_node_t *shead;

	if (!ht)
		return;

	shead = ht->shead;
	if (!shead || strcmp(snode->key, shead->key) < 0)
	{
		snode->snext = shead;
		ht->shead = snode;
		if (shead)
			shead->sprev = snode;
		else
			ht->stail = snode;
		return;
	}
	while (shead->snext)
	{
		if (strcmp(snode->key, shead->snext->key) < 0)
			break;
		shead = shead->snext;
	}
	snode->sprev = shead;
	snode->snext = shead->snext;

	if (shead->snext)
		shead->snext->sprev = snode;
	else
		ht->stail = snode;
	shead->snext = snode;
}

/**
 * shash_table_create - create a shash table
 * @size: size of array in shash table
 *
 * Return: Pointer to the shash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (size == 0)
		return (NULL);

	ht = calloc(1, sizeof(shash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc(size, sizeof(shash_node_t *));
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}


/**
 * add_snode - add new snode at the beginning of the shash table list
 * @key: key to add
 * @value: value to add
 *
 * Return: the address of the new element, NULL if failure
 */
shash_node_t *add_snode(const char *key, const char *value)
{
	shash_node_t *new;

	new = calloc(1, sizeof(shash_node_t));
	if (!new)
		return (NULL);

	new->key = strdup(key);
	if (!new->key)
	{
		free(new);
		return (NULL);
	}
	new->value = strdup(value);
	if (!new->value)
	{
		free(new->key);
		free(new);
		return (NULL);
	}

	return (new);
}
/**
* check_sht - check if key exists in shash table
* @ht: double pointer to entire shash table
* @key: key to look in shash table
*
* Return: 1 if key is found, 0 if not
*/

int check_sht(shash_node_t **ht, const char *key)
{
	shash_node_t *temp = *ht;

	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (1);
		temp = temp->next;
	}
	return (0);
}

/**
* switch_sval - if key is pre-existing, switch it with new value
* @ht: double pointer to entire shash table
* @key: key to add
* @value: value to override at key
*
* Return: void
*/

void switch_sval(shash_node_t **ht, const char *key, const char *value)
{
	shash_node_t *temp = *ht;

	while (temp && strcmp(temp->key, key))
		temp = temp->next;
	if (temp)
	{
		free(temp->value);
		temp->value = strdup(value);
		if (!temp->value)
			exit(1);
	}
}


/**
* shash_table_set - add element to shash table
* @ht: shash table to add element to
* @key: key of the new element, override current key if exists
* @value: value to store at key
*
* Return: 1 on success, 0 on failure
*/

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	unsigned char *ukey = NULL;
	shash_node_t *snode = NULL;

	if (!ht || !key || key[0] == '\0' || !ht->array || !ht->size || !value)
		return (0);

	ukey = (unsigned char *)key;

	index = key_index(ukey, ht->size);

	if (check_sht(&ht->array[index], key))
	{
		switch_sval(&ht->array[index], key, value);
		return (1);
	}
	snode = add_snode(key, value);
	if (!snode)
		return (0);
	snode->next = ht->array[index];
	ht->array[index] = snode;
	shash_table_sort(ht, snode);
	return (1);
}

/**
* shash_table_get - get value from shash table
* @ht: shash table
* @key: key to find value at
*
* Return: value of element if found, NULL on failure
*/

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	const unsigned char *ukey = NULL;
	shash_node_t *shead = NULL;

	if (!ht || !key)
		return (NULL);

	ukey = (unsigned char *)key;

	index = key_index(ukey, ht->size);

	shead = ht->array[index];

	while (shead)
	{
		if (!strcmp(shead->key, key))
			return (shead->value);
		shead = shead->next;
	}

	return (NULL);
}

/**
* shash_table_print_rev - print all elements of shash table
* @ht: shash table to print
*
* Return: void
*/

void shash_table_print_rev(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *snode = NULL;

	if (!ht || !ht->array)
	{
		return;
	}
	if (!ht->size)
	{
		printf("{}\n");
		return;
	}
	snode = ht->stail;
	printf("{");
	while (snode)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", snode->key, snode->value);
		snode = snode->sprev;
		flag = 1;
	}
	printf("}\n");
}

/**
* shash_table_print - print all elements of shash table
* @ht: shash table to print
*
* Return: void
*/

void shash_table_print(const shash_table_t *ht)
{
	int flag = 0;
	shash_node_t *snode = NULL;

	if (!ht || !ht->array)
	{
		return;
	}
	if (!ht->size)
	{
		printf("{}\n");
		return;
	}
	printf("{");
	snode = ht->shead;
	while (snode)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", snode->key, snode->value);
		snode = snode->snext;
		flag = 1;
	}
	printf("}\n");
}

/**
* shash_table_delete - deletes and frees a shash table
* @ht: table to delete
*
* Return: void
*/

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *temp = NULL, *curr = NULL;

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
