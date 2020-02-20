#include "holberton.h"

/**
 * _strcmp - compare two strings .
 *
 * @s1: parameter type pointer
 *
 * @s2: parameter type pointer
 *
 * Return: dest pointer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, result;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j]; j++)
		;
	if (i > j)
	{
		result = 15;
	}
	else if (i < j)
	{
		result = -15;
	}
	else
	{
		result = 0;
	}
	return (result);
}
