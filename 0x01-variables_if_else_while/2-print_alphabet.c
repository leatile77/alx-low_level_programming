#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Print char
 *
 * Return: 0
 */

int main(void)
{
char alpha_bet;

for (alpha_bet = 'a'; alpha_bet <= 'z'; alpha_bet++)
{
putchar(alpha_bet);
}

return (0);
}
