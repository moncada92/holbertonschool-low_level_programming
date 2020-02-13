#include "holberton.h"

/**
 * _isdigit - check the is number 0 through 9.
 *
 * @c: is a variable or parameter
 * Return: 0 is true or 1 is false.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
