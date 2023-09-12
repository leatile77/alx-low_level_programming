#include "main.h"

/**
 * print_alphabet_x10 - Print alpha on x10 rows
 *
 * no return
 */

void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}
}
