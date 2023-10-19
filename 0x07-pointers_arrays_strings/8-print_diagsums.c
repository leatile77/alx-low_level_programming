#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Function that prints 2 diagonals of in square matrix
 * @a: square matrix 
 * @size: size of square matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
int i, diag1, diag2;
diag1 = 0;
diag2 = 0;

for (i = 0; i < size; i++)
{
diag1 = diag1 + a[i * size + i];
}

for (i = size--; i >= 0; i--)
{
diag2 = diag2 + a[size * i +(size - i - 1)];
}
printf("%d, %d\n", diag1, diag2);
}
