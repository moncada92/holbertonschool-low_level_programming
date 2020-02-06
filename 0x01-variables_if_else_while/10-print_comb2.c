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
int m, o;
while (n < 100)
{
m = n / 10;
o = n % 10;
putchar(m + '0');
putchar(o + '0');
if (n < 99)
{
putchar(44);
putchar(32);
}
n++;
}
putchar('\n');
return (0);
}
