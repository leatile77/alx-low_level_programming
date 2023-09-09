#include <stdio.h>

/**
 * main - upper and lower case alphabets
 *
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{

char alpha_Bet;

for (alpha_Bet = 'a'; alpha_Bet <= 'z'; alpha_Bet++)
{
putchar(alpha_Bet);
}


for (alpha_Bet = 'A'; alpha_Bet <= 'Z'; alpha_Bet++)
{
putchar(alpha_Bet);
putchar('\n');
}
	return (0);
}
