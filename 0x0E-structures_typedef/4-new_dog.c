#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create structure dog.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 * Return: Pointer
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ptr;
	int j, k, l;
	char *n, *o;

	ptr = malloc(sizeof(struct dog));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (j = 0; name[j] != '\0'; j++)
	{
	}
	for (k = 0; owner[k] != '\0'; k++)
	{
	}
	n = malloc((sizeof(char) * j) + 1);
	if (n == NULL)
	{
		free(ptr);
		return (NULL);
	}
	o = malloc((sizeof(char) * k) + 1);
	if (o == NULL)
	{
		free(ptr);
		free(n);
		return (NULL);
	}
	for (l = 0; l < j; l++)
	{
		n[l] = name[l];
	}
	for (l = 0; l < k; l++)
	{
		o[l] = owner[l];
	}
	ptr->name = n;
	ptr->age = age;
	ptr->owner = o;
	return (ptr);
}
