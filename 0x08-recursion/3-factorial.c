#include "holberton.h"

/**
 * factorial - print factor the n number if n less 0 print error -1
 * @n: content number
 * Return: Always result factorial if n is less 0 return -1
 **/

int factorial(int n)
{
	if (n < 1 && n > -1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
