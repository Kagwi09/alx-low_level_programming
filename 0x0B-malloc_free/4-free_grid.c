#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*free_grid - frees meory from grid
*@grid: 2D grid
*@height: the number of rows
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
