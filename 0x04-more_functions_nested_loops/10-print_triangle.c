#include "holberton.h"

/**
 * print_triangle  - print the zise number # and space in form the triangle .
 *
 * @n: varaible the parameter
 * Return: 0
 */
void print_triangle(int n)
{
	int m, o, l;

	o = 0;

	while (n > 0)
	{
		m = n - 1;
		l = o;
		while (m > 0)
		{
			_putchar(' ');
			m--;
		}
		while (l >= 0)
		{
			_putchar('#');
			l--;
		}
		n--;
		o++;
		_putchar('\n');
	}
	if (o < 1)
		_putchar('\n');
}
