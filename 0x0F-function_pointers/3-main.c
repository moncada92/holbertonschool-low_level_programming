#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the program
 * @argc: arguments cant
 * @argv: vector arguments
 * Return: 0 if false, something else otherwise.
 */
int main(int argc, char *argv[])
{
	int (*get)(int, int);
	int a, b, operator;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	get = get_op_func(argv[2]);

	if (get == NULL)
	{
		printf("Error\n");
		exit(99);
	}


	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operator = get(a, b);

	printf("%d\n", operator);
	return (0);
}
