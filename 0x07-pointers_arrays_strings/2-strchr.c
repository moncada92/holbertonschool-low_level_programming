#include "holberton.h"

/**
 * _strchr - find a character in a string and print
 * @s: array the strings
 * @c: character to fill
 * Return: value char s
 **/

char *_strchr(char *s, char c)
{
	int i, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			j++;
		}
	}
	
	if (j)
		return (s);
	else
		return (0);
}
