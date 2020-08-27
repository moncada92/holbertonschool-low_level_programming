#include "search_algos.h"

/**
 * jump_search - jump linear a int value
 * @array: list to search
 * @size: size the array
 * @value: value to search in the array
 * Return: if search value return first index otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	int i, j;
	int start = 0, before = 0, r = -1;
	int jump = sqrt(size);

	if (array == NULL)
		return (r);

	while (start < (int)size)
	{
		printf("Value checked array[%i] = [%i]\n", start, array[start]);
		before = start;
		start = jump;

		if (array[start] >= value)
		{
			for (i = before; i <= start; i++)
			{
				if (array[i] == value)
				{
					printf("Value found between indexes [%i] and [%i]\n",
				       before, start);
					r = value;
					for (j = before; j <= start; j++)
					{
						if (j > value)
							break;
						printf("Value checked array[%i] = [%i]\n", j, array[j]);
					}
						break;
				}
			}
			break;
		}
		else if (array[before] < value && start > (int)size)
		{
			printf("Value found between indexes [%i] and [%i]\n", before, start);
			printf("Value checked array[%i] = [%i]\n", before, before);
		}

		jump += sqrt(size);
	}

	return (r);
}
