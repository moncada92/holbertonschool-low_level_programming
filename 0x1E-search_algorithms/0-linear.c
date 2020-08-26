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
	int result = -1;

	if (array == NULL)
	{
		result = -1;
	}

	while (i < (int)size_a)
	{
		printf("Value cheked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			result = value;
			return (result);
		}
		i++;
	}

	return (result);
}
