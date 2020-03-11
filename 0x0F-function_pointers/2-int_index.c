#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - ter string function pointer.
 * @array: array for iter
 * @size:  is the number elements of the array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: -1 or numbers > to 0
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >  0 || array != NULL || cmp != NULL)
	{
		for (i = 0; i < size ; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}

	}
	else
	{
		return (-1);
	}

	return (-1);
}
