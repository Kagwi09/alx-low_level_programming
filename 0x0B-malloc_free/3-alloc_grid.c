#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
***alloc_grid - allocates data into matrix
*@width: no. of rows
*@height: no. of columns
*Return: NULL or start
*/
int **alloc_grid(int width, int height)
{
int a;
int b;
int *start;

if ((width <= 0) || (length <= 0))
{
return (NULL);
}
start = malloc(height * sizeof(int *));

if (start == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
start[a] = malloc(width * sizeof(int *));

if (start[a] == NULL)
{
for (; a >= 0; a--)
{
free(start);
return (NULL);
}
}
}
for (a = 0; a < height; a++)
{
for (b = 0; b < width; b++)
{
start[a][b] = 0;
}
}
return (start);
}

