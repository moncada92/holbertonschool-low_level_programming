#include "holberton.h"

/**
 * _strncat - copy string and append ohter string in n .
 *
 * @dest: parameter type pointer
 *
 * @src: parameter type pointer
 *
 * @n: parameter type int
 *
 * Return: dest pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, k = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		;
	while (k <= j)
	{
		if (n > 0)
		{
			dest[i] = src[k];
			i++;
			k++;
			n--;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
