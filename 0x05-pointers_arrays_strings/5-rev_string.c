#include "holberton.h"

/**
 * rev_string - print a string in reverse
 *
 * @s:this is a variable string
 *
 * Return: Always value void.
 */
void rev_string(char *s)
{
	int i, c, l;
	char h;

	for (i = 0; s[i] != '\0'; i++)
		;

	l = i;
	for (i--, c = 0; c < l / 2; i--, c++)
	{
		h = s[c];
		s[c] = s[i];
		s[i] = h;
	}
}
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	i--;
	_putchar('\n');
}
