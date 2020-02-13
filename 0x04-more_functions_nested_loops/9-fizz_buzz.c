#include <stdio.h>
#include "holberton.h"

/**
 * main  - print multiples 3, 5 and print the word .
 *
 * Return: 0
 */
int main(void)
{
	int mul3, mul5, i;

	i = 1;
	mul3 = 3;
	mul5 = 5;

	while (i <= 100)
	{
		if ((i % mul3) == 0 && (i % mul5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % mul3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % mul5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}
		i++;
	}
	printf("\n");
	return (0);
}
