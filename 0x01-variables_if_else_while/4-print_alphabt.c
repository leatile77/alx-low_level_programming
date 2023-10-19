#include <stdio.h>

/**
 * main - all letters beside q and e
 *
 * Return: 0
 */

int main(void)
{

char alphabt, e, q;
e = 'e';
q = 'q';


for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
{
if (alphabt != e && alphabt != q)
putchar(alphabt);
}
putchar('\n');
return (0);
}

