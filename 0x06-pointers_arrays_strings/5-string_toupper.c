#include "holberton.h"

/**
 * string_toupper - transform string lowercase at uppercase .
 *
 * @s: parameter type pinter
 *
 * Return: dest pointer
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 91) && (s[i] <= 122))
		{
			s[i] = s[i] - 32;
		}
		i++;
	}

	return (s);

}
