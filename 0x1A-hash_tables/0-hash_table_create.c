#include "hash_tables.h"

/**
 * hash_table_create - function for create hash table
 * @size: size max the table
 * Return: a hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	/*size == 0*/
	if (size == 0)
		return (NULL);

	/*allocate table */
	hash_table_t *t_hsh = malloc(sizeof(hash_table_t) * 1);

	if (t_hsh == NULL)
		return (NULL);

	/*allocate table array*/
	t_hsh->array = malloc(sizeof(hash_node_t *) * size);

	if (t_hsh->array == NULL)
	{
		free(t_hsh);
		return (NULL);
	}

	t_hsh->size = size;

	/*set each to null */
	for (; i < size; i++)
	{
		t_hsh->array[i] = NULL;
	}

	return (t_hsh);
}
