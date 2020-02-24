#include "holberton.h"

/**
 * _memset - fill byte with sctrings
 * @s: array the strings
 * @b: character to fill
 * @n: size the for fill
 * Return: value char s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
