#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @n: value final sum
 * @separator: value separate number for number
 * Return: no return
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list valist;

	va_start(valist, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char*);

		if (str == NULL)
			printf("(nil)");

		printf("%s", str);

		if ((i + 1) == n)
		{
			printf("\n");
		}
		else
		{
			if (separator != NULL)
				printf("%s", separator);
		}
	}

	va_end(valist);
}
