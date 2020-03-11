#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - ter string function pointer.
 * @array: array for iter
 * @size:  is the size of the array
 * @action: is a pointer to the function you need to use
 * Return: notghin is void
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != '\0' &&  action != '\0')
	{
		for (i = 0; i < size ; i++)
		{
			action(array[i]);
		}

	}
}
