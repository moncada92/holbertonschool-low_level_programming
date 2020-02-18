#include "holberton.h"

/**
 * swap_int - Modify the value pointer
 *
 * @a:this is a pointer variable
 *
 * @b:this is a pointer variable
 *
 * Return: Always void.
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
