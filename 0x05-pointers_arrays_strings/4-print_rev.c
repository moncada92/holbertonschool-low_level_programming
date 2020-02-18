#include "holberton.h"

/**
 * print_rev - print a string in reverse
 *
 * @s:this is a pointer string
 *
 * Return: Always value void.
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
