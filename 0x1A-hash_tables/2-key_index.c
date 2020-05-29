#include "hash_tables.h"

/**
 * key_index - function for create the index key
 * @size: size max the table
 * @key:  key the data info
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = 0;

	if (key == NULL)
		return (0);

	index = hash_djb2(key);

	index = index % size;

	return (index);

}
