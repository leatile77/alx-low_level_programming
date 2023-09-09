#include <stdio.h>

/**
 * main - Alphabets in reverse using putcha
 *
 * Return: 0
 */

int main(void)
{
char rev;
for (rev = 'z'; rev >= 'a'; rev++)
{
putchar(rev);
}
putchar('\n');

return (0);
}
