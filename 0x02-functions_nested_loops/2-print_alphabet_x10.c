#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int timeprint = 0;

	while (timeprint < 10)
	{
		char first = 'a';

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
