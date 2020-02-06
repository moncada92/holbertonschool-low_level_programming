#include <stdio.h>
#include <string.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int n = 0;
char c = 'a';
while (n < 10)
{
putchar(n + '0');
n++;
}
while (c < 'g')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
