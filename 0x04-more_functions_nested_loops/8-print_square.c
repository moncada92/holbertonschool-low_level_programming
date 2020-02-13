#include "holberton.h"

/**
 * print_square  - print the # in line .
 *
 * @n: varaible the parameter
 * Return: 0
 */
void print_square(int n)
{
	int m, l;

	l = n;
	
	if (n < 1)
		_putchar('\n');

	while (n > 0)
	{
		m = l;
		while (m > 0)
		{
			_putchar('#');
			m--;
		}
		n--;
		_putchar('\n');
	}
}
