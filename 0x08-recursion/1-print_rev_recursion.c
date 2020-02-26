#include "holberton.h"

/**
 * _print_rev_recursion - print strings in reverse use recursions functions
 * @s: content strings
 * Return - void
 **/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
