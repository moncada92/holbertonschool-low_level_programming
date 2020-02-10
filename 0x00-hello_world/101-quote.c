#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 1
 */
int main(void)
{
int longitud = strlen("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", longitud);
return (1);
}
