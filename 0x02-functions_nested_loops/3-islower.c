#include "holberton.h"
/**
 * _islower - print 1 if the letter is lowercase and 0 otherwise
 *
 * @c: parameter for know if is lowercase
 *
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
