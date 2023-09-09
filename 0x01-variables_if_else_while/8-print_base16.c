#include <stdio>

/**
 * main - numbers using putcha
 *
 * Return: 0
 */

int main(void)
{
int num;
char alph;

for (num = '0'; num < '10'; num++)
putchar(num);

for (alph = 'a'; alph < 'g'; alph++)
putchar(alph);
putchar('\n');

return (0);
}
