#include "holberton.h"

/**
 * _strcat - copy string and append ohter string.
 *
 * @dest: parameter type pointer
 *
 * @src: parameter type pointer
 *
 * Return: dest pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		;
	while (k <= j)
	{
		dest[i] = src[k];
		i++;
		k++;
	}
	return (dest);
}
