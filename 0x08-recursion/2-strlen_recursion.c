#include "holberton.h"

/**
 * _strlen_recursion - print lenght the stringse use recursions functions
 * @s: content strings
 * Return - void
 **/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
	return (0);
}
