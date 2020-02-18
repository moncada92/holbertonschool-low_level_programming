#include "holberton.h"

/**
 * _strlen - print lenght the string char
 *
 * @s:this is a pointer string
 *
 * Return: Always value lenght.
 */

int _strlen(char *s)
{
	int  i = 0;

	while (s[i] != '\0')
{
	i++;
}

	return (i);
}
