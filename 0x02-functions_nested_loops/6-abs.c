#include "holberton.h"
/**
 * _abs  - get the value absolute for numbers integer
 *
 * @n: parameter integer
 *
 * Return: the value absolute
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (0);
	}
}
