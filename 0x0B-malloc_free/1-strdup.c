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
	int i = 0, j;
	char *dest;

	if (str == NULL)
	{
		return (0);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}

	dest = (char *)malloc((i * sizeof(char)) + 1);

	if (dest == 0)
	{
		return (0);
	}

	for (j = 0; j < i; j++)
	{
		*(dest + j)  = *(str + j);
	}

	return (dest);
}
