#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _memset - set values
 * @p: pointer
 * @v: value change
 * @s: size
 * Return: value char
 */

char *_memset(char *p, char v, unsigned int s)
{
	unsigned int i;

	for (i = 0; i < s; i++)
	{
		*(p + i) = v;
	}

	return (p);
}

/**
 * *_calloc - create funcion caloc
 * @nmemb: characteres a copy
 * @size: characteres copy with n
 * Return: void
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *dest;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	dest = malloc(nmemb * size);

	if (dest == NULL)
	{
		return (NULL);
	}

	_memset(dest, 0, nmemb * size);

	return (dest);
}
