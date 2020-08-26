#include "search_algos.h"

/**
 * linear_search - search linear a int value
 * @array: list to search
 * @size: size the array
 * @value: value to search in the array
 * Return: if search value return first index otherwise -1
 */

int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value cheked array[%i] = [%i]\n", i, *(array + i));
		if (*(array + i) == value)
		{
			return (value);
	}

	return (-1);
}
