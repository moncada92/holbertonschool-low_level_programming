#include <unistd.h>
/**
 * main - print helllo, holberton
 * Return: 0
 */

int main ()
{
	return (write(1, "Hello, Holberton", 16));
}
