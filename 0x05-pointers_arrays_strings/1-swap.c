#include "main.h"

/**
 * swap_int - Swaps a and b
 * @a: int swapped with b
 * @b: int swapped with a
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int temporary = *a;
*a = *b;
*b = temporary;
}
