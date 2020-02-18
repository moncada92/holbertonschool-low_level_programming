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
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
		;
	for (j = i; j >= 0; j--)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');
}