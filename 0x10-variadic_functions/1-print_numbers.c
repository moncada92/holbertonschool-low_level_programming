#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - sum int values.
 * @n: value final sum
 * @separator: value separate number for number
 * Return: no return
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int number;
	va_list valist;

	va_start(valist, n);

	if (n == 0)
		return;

	for (i = 0; i < n; i++)
	{
		number = va_arg(valist, int);

		printf("%d", number);

		if ((i + 1) == n )
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
