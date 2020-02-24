#include "holberton.h"

/**
 * _strchr - find a character in a string and print
 * @s: array the strings
 * @c: character to fill
 * Return: value char s
 **/

char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
	return (s);
}
