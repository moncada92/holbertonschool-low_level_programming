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
	int i=0, j;

	/*for (i = 0; dest[i] != '\0'; i++)*/
		;
	for (j = 0; src[j] != '\0'; j++)
		;
	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest);
}
