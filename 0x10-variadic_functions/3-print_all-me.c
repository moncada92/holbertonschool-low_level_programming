#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_c - print char
 * @format: first number
 */

void op_c(va_list format)
{
	printf("%c", va_arg(format, int));
}

/**
 * op_i - print int
 * @format: first number
 */

void op_i(va_list format)
{
	printf("%i", va_arg(format, int));
}

/**
 * op_f - print float
 * @format: first number
 */

void op_f(va_list format)
{
	printf("%f", va_arg(format, double));
}

/**
 * op_c - print char
 * @format: first number
 */

void op_s(va_list format)
{
	char *s = va_arg(format, char*);

	if (s == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s", s);
	}
}

/**
 * print_all - print values.
 * @format: type date
 * Return: no return
 **/

void print_all(const char * const format, ...)
{
	op_t ops[] = {
		{"c", op_c},
		{"i", op_i},
		{"f", op_f},
		{"s", op_s},
		{NULL, NULL}
	};
	unsigned int i = 0, j = 0;
	char *separator = "";
	va_list list;

	va_start(list, format);

	while (format[i] != '\0' && format != NULL)
	{
		j = 0;
		while (j < 4)
		{
			if (ops[j].op[0] == format[i])
			{
				printf("%s", separator);
				ops[j].f(list);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
