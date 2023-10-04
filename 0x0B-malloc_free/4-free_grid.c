#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Function that frees a 2D Grid we created in prev question
 * @grid: grid to free
 * @height: number of rows in grid
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}


