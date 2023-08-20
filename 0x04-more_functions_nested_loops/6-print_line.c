#include <stdio.h>
#include "main.h"
/**
*print_line - prints line
*Return: void
*@n: the number of times a is printed
*/
void print_line(int n)
{
char a;
int m;
a = '_';

if (n <= 0)
{
putchar('\n');
}
else
{
for (m = 0; m < n; m++)
{
putchar(a);
}
putchar('\n');
}
}
