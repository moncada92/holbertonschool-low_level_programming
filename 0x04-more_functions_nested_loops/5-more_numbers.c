#include "holberton.h"

/**
 * more_numbers  - print the numbers 0 -  14 in 10 lines..
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0;
	int j, k, l;

	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			k = j / 10;
			l = j % 10;
			if (k > 0)
			{
				_putchar(k + '0');
			}
			_putchar(l + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
