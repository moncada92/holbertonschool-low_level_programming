#include <stdio.h>
#include <stdlib.h>
/**
 * main - print opcode
 * @argc: arg count
 * @argv: arguments
 *
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int i, b;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	b = atoi(argv[1]);
	if (b < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < b - 1; i++)
	{
		printf("%02x ", ((unsigned char *)main)[i]);
	}
	printf("%02x\n", ((unsigned char *)main)[i]);
	return (0);
}
