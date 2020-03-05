#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *malloc_checked - create copy string in dinamyc memory.
 * @b: value size
 * Return: void
 **/

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}
