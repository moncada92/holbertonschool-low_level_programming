#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - check the code for Holberton School students.
 *
 * @argc: number the arguments
 * @argv: array thw argumnets
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{

	printf("argc: %d\n", argc);
	int num1, num2, operator, result;

	int (*p)(int, int);

	if (argc != 4)
	{
		printf("ERROR!!!\n");
		exit(98);

	}

	if (strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	p = get_op_func(argv[2]);

	operator = argv[2][0];

	switch (operator)
	{
	case '+':
		break;
	case '-':
		break;
	case '*':
		break;
	case '/':
		break;
	case '%':
		break;
	default:
		printf("Error\n");
		exit(99);
	}

	result = p(num1, num2);

	printf("%d\n", result);

	return (0);
}
