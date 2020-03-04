#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *str_concat - concat two strings in dinamyc memory.
 * @s1: characteres for string
 * @s2: characteres for string
 * Return: char value
 **/

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k, l, size;
	char *dest;

	if (s2 == NULL || s1 == NULL)
	{
		return "";
	}

	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}

	size = i + j;

	dest = (char *)malloc((size * sizeof(char) + 1));

	if (dest == 0)
	{
		return (0);
	}

	for (k = 0; k < i; i++)
	{
		*(dest + k) = *(s1 + k);
	}

	for (k = 0, l = i ; k < j; l++, k++)
	{
		*(dest + l) = *(s2 + k);
	}

	*(dest + l) = '\0';

	return (dest);
}
