#include "function_pointers.h"

/**
 * print_name - create structure dog.
 * @name: pointer string
 * @age:  pointer string
 * Return: notghin is void
 **/

void print_name(char *name, void (*f)(char *))
{

	 f(name);
}
