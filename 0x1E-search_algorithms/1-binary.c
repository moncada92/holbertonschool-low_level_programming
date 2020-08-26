#include "search_algos.h"

/**
 * binary_search - search binary a int value
 * @array: list to search
 * @size: size the array
 * @value: value to search in the array
 * Return: if search value return first index otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0, j = 0;
	int l = 0, r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (j = l; j < r; j++)
		{
			printf("%d, ", *(array + j));
		}
		printf("%d\n", *(array + j));

		i = ((l + r) / 2);

		if (array[i] < value)
			l = i + 1;
		else if (array[i] > value)
			r = i - 1;
		else
			return (value);
	}
	return (-1);
}
