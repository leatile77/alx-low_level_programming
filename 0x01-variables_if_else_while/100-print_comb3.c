#include <stdio.h>

/**
 * main - two digits
 *
 * Return: 0
 */

int main(void)
{
int a, b;
for (a = '0'; a < '9'; a++)
{
for (b = '0'; b <= '9'; b++)
{
if (b > a || (b != '9' && a != '8'))
{
putchar(a);
putchar(b);
putchar(',');
putchar(' ');
}
}
}
return (0);
}
