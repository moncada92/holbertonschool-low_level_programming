#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - create structure dog.
 * @d: First member
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: ");
		d->name == NULL ? printf("(nil)\n") : printf("%s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: ");
		d->owner == NULL ? printf("(nil)\n") : printf("%s\n", d->owner);
	}

}
