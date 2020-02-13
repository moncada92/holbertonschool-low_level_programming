#include "holberton.h"

/**
 * print_line  - print the line it is number .
 *
 * @n: varaible the parameter
 * Return: 0
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
