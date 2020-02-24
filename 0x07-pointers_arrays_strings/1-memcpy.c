#include "holberton.h"

/**
 * _memcpy - copy the array values
 * @dest: array the strings
 * @src: character to fill
 * @n: size the for fill
 * Return: value char s
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
