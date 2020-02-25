#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: array the strings
 * @accept: character to fill
 * Return: value char accept
 **/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0; *(s + j); j++)
	{
		for (i = 0; *(accept + i); i++)
		{
			if (*(accept + i) == *(s + j))
			{
				return (s + j);
			}
		}

	}
	return (0);
}
