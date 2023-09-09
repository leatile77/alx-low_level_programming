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
if (b > a && (a != '8' && b != '9' ))
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
