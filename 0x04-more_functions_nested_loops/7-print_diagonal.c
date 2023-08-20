#include <stdio.h>
#include "main.h"
/**
*print_diagonal - prints a diagonal using backslashes
*Return: void
*@n: the x axis value
*/
void print_diagonal(int n)
{
char b;
int m;
int p;
b = '\\';

if (n <= 0)
{
putchar('\n');
}
else
{
for (m = 0; m < n; m++)
{
for (p = 0; p < m; p++)
{
putchar(' ');
}
putchar(b);
putchar('\n');
}
}
}
