#include "dog.h"

/**
 * init_dog - create structure dog.
 * @d: First member
 * @name: Second member
 * @age: Third member
 * @owner: Fourth member
 * Return: notghin is void
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
