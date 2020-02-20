#include "holberton.h"

/**
 * _strncpy - copy string and append ohter string in n .
 *
 * @dest: parameter type pointer
 *
 * @src: parameter type pointer
 *
 * @n: parameter type int
 *
 * Return: dest pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
