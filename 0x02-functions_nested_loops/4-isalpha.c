#include "holberton.h"
/**
 * _isalpha - print 1 if the letter is alpha and 0 otherwise
 *
 * @c: parameter for know if is alpha
 *
 * Return: 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
