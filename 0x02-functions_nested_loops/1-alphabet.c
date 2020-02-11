#include "holberton.h"
/**
 * main - print alphabet with function print_alphabet
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char first = 'a';
	while (first <= 'z')
	{
		_putchar(first);
		first ++;
	}

	_putchar('\n');

	return;
}
