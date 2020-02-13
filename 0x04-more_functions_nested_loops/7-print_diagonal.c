#include "holberton.h"

/**
 * print_diagonal  - print the line it is number .
 *
 * @n: varaible the parameter
 * Return: 0
 */
void print_diagonal(int n)
{
	int m, o;
	o = 0;

	while (n > 0)
	{
		m = o;
		while (m > 0)
		{
			_putchar(' ');
			m--;
		}
		_putchar('\\');
		n--;
		o++;
		_putchar('\n');
	}
	if (o < 1)
		_putchar('\n');
}
