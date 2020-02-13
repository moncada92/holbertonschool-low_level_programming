#include "holberton.h"

/**
 * _isupper - check the letter is uppercase.
 *
 * @c: is a variable or parameter
 * Return: 0 is true or 1 is false.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
