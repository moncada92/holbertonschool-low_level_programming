#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * *aray_range - create space memory min and max
 * @nmemb: characteres a copy
 * @size: characteres copy with n
 * Return: void
 **/

int *array_range(int min, int max)
{

	int *dest, k;


	if (min > max)
	{
		return (NULL);
	}

	dest = malloc((max - min + 1) * sizeof(int));

	if (dest == NULL)
	{
		return (NULL);
	}

	for (k = 0; min <=  max; k++, min++)
	{
		*(dest + k) = min;
	}

	return (dest);
}
