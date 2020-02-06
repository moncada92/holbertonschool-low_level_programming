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
if (n < 9)
{
putchar(44);
putchar(32);
}
else
{
putchar(36);
}

n++;
}
putchar('\n');
return (0);
}
