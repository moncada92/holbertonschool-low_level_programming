#include "holberton.h"

/**
 * reverse_array - reverse string .
 *
 * @a: parameter type pointer
 *
 * @n: parameter type pointer
 *
 * Return: dest pointer
 */
void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	n = n - 1;

	while (i <=  n)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;

		i++;
		n--;
	}

}
