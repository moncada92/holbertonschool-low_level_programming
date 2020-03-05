#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *string_nconcat - contact strings in n number to characters
 * @s1: characteres a copy
 * @s2: characteres copy with n
 * @n: number the characters to copy
 * Return: void
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k, l, size;
	char *dest;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (*(s1 + i) != '\0')
	{
		i++;
	}
	while (*(s2 + j) != '\0')
	{
		j++;
	}
	if (n > j)
	{
		n = j;
	}
	size = i + n;
	dest = (char *)malloc((size * sizeof(char)) + 1);
	if (dest == 0)
	{
		return (0);
	}
	for (k = 0; k < i; k++)
	{
		*(dest + k)  = *(s1 + k);
	}
	for (k = 0, l = i; k < n; k++, l++)
	{
		*(dest + l) = *(s2 + k);
	}
	*(dest + l) = '\0';
	return (dest);
}
