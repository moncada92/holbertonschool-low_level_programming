#include "holberton.h"

/**
 * _strspn - To gets the length of a prefix substring.
 * @s: array the strings
 * @accept: character to fill
 * Return: value char accept
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, b = 1;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; accept[i] != '\0'; i++ )
		{
			if (accept[i] == s[j])
			{
				b++;
				break;

			}
		}
		if (accept[i] == 0)
			break;
	}
	return (j);
}
