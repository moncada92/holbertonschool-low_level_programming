#include "holberton.h"

/**
 * sqrt_a - check the code for Holberton School students.
 * @a: number
 * @b: number of power
 * Return: Always 0.
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion  - print the natural square root of a number
 * @n: number
 * Return: Always result square
 **/

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
