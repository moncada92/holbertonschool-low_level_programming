#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *_strdup - create copy string in dinamyc memory.
 * @str: characteres for string
 * Return: char value
 **/

char *_strdup(char *str)
{
	unsigned int i = 0, j;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i == 0)
	{
		return (NULL);
	}

	char *dest = (char *)malloc(i * sizeof(char));

	for (j = 0; j <= i; j++)
	{
		dest[j] = str[j];
	}

	return (dest);

}
