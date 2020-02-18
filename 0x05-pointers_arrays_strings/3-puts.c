#include "holberton.h"

/**
 * _puts - print a string parameter
 *
 * @str:this is a pointer string
 *
 * Return: Always value void.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
