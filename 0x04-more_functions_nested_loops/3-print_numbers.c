#include "holberton.h"

/**
 * print_numbers  - print the snumbers 0 -  9.
 *
 * Return: 0
 */
void print_numbers(void)
{
	char numbers[] = "0123456789";
	int i = 0;

	while (numbers[i] != '\0')
	{
		_putchar(numbers[i]);
		i++;
	}
	_putchar('\n');
}
