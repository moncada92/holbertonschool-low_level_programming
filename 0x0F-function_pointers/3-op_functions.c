#include "3-calc.h"

/**
 * op_add - sum two int
 *
 * @a: first number
 * @b: second number
 * Return: value int
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - rest two numbers
 *
 * @a: first number
 * @b: second number
 * Return: value int
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 *
 * @a: first number
 * @b: second number
 * Return: value int
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divider into two numbers
 *
 * @a: first number
 * @b: second number
 * Return: value int
 */

int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	print("Error!!!\n");
	exit(100);
}

/**
 * op_mod - module into two numbers
 *
 * @a: first number
 * @b: second number
 * Return: value int
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
