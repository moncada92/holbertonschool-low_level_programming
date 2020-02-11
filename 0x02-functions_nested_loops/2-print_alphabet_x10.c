#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int timeprint = 0;
	char first;

	while (timeprint < 10)
	{
		first = 'a';

		while (first <= 'z')
		{
			_putchar(first);
			first++;
		}

		timeprint++;

		_putchar('\n');
	}

	_putchar('\n');
}
