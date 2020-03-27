#include "holberton.h"

/**
 * binary_to_uint - print value decimal
 * @b: string
 * Return: value int
 **/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		n = n << 1;
		if (*b != '1' && *b != '0')
			return (0);
		else if (*b == '1')
			n = n | 1;
		b++;
	}
	return (n);
}
