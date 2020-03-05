#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *_calloc - create funcion caloc
 * @nmemb: characteres a copy
 * @size: characteres copy with n
 * Return: void
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int k;
	char *dest;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	dest = (char *)malloc(nmemb * size);
	if (dest == 0)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++)
	{
		if (dest[k]  != 0)
		{
			dest[k] = 0;
		}
	}
	return (dest);
}
