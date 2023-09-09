#include <stdio.h>

/**
 * main - numbers using putcha
 *
 * Return: 0
 */

int main(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num < 9)
{
putchar(',');
putchar(' ');
}
else
{
putchar('\n');
break;
}
}

return (0);
}
