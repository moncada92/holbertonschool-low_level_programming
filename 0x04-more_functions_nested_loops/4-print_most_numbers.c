#include "holberton.h"

/**
 * print_most_numbers  - print the numbers 0 -  9 exception the 2 and 4.
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	char numbers[] = "0123456789";
	int i = 0;

	while (numbers[i] != '\0')
	{
		if (!(numbers[i] == '2' || numbers[i] == '4'))
		{
			_putchar(numbers[i]);
		}
		i++;
	}
	_putchar('\n');
}
