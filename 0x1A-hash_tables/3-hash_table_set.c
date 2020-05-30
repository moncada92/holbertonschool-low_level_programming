#include "hash_tables.h"

/**
 * ht_rep - add node in the entry in the hash table
 * @value: value the date
 * @key: key de the value
 * Return: a hash_node_t value
 */

hash_node_t *ht_rep(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(node) * 1);

	node->key = malloc(strlen(key) + 1);
	node->value = malloc(strlen(value) + 1);

	if (node == NULL || node->key == NULL || node->value == NULL)
		return (NULL);

	strcpy(node->key, key);
	strcpy(node->value, value);

	node->next = NULL;

	return (node);
}


/**
 * hash_table_set - insert nodes in the hash table
 * @value: value the node
 * @key:  key the data info
 * @ht: hash table created
 * Return: 1 is success or 0 it is error
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* get hash_key (position) in the hash table  */
	unsigned long int index = (key_index((unsigned char *)key, ht->size));

	if (key == NULL)
		return (0);

	/*asignament position for the value in hash table */
	hash_node_t *entry = ht->array[index];

	/*add dates in a linked list in the entry the hash table*/
	if (entry == NULL)
	{
		ht->array[index] = ht_rep(key, value);

		if (ht->array[index] == NULL)
			return (1);

		return (1);
	}
	hash_node_t *tmp;
	/* is a collision*/
	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			/*match found, replace value*/
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
			return (1);
		}

		/*walk to next*/
		tmp = entry;
		entry = tmp->next;
	}
	/*if not match add new a node*/
	tmp->next = ht_rep(key, value);
	return (0);
}
