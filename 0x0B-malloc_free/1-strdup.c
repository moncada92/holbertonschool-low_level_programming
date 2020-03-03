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

	if (str == NULL)
	{
		return (0);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}

	char *dest = (char *)malloc((i * sizeof(char)) + 1);

	if (dest == NULL)
	{
		return (0);
	}

	for (j = 0; j < i; j++)
	{
		*(dest + j)  = *(str + j);
	}

	return (dest);
}
