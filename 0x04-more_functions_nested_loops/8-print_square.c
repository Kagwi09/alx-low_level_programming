#include <stdio.h>
#include "main.h"
/**
*print_square - prints a square
*Return: void
*@size: position along the x axis
*/
void print_square(int size)
{
char h;
int m;
int n;
h = '#';

if (size <= 0)
{
putchar('\n');
}
else
{
for (m = 0; m < size; m++)
{
for (n = 0; n < size; n++)
{
putchar(h);
}
putchar('\n');
}
}
}
