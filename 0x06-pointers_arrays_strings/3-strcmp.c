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
	int i = 0;

	while ((s1[i] == s2[i]) && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
