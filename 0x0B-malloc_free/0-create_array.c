#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *create_array - creates an array of chars, and initializes.
 * @size: size the string
 * @c: strings
 * Return: char value
 **/

char *create_array(unsigned int size, char c)
{

	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		char *p = (char *)malloc(size * sizeof(char));

		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}

		return (p);
	}
}
