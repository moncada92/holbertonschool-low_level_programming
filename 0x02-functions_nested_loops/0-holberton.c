#include "holberton.h"
/**
 * main - print holberton in one line
 *
 * Return: 0
 */

int main(void)
{

	char name[] = "Holberton";
	int i = 0;

	while (name[i] != '\0')
	{
		_putchar(name[i]);
		i++;
	}

	_putchar('\n');

	return (0);
}
