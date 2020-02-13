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
		while (j < 11)
		{
			if (j <= 9)
			{
				_putchar(j + '0');
			}
			else
			{
				k = 1;
				l = 0;
				while (l < 5)
				{
					_putchar(k + '0');
					_putchar(l + '0');
					l++;
				}
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
