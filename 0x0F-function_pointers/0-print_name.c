#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - create structure dog.
 * @name: pointer string
 * @f:  pointer string
 * Return: notghin is void
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}
