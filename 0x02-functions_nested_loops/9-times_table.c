#include <stdio.h>
#include "main.h"
/**
*times_table - prinst the multiplicatio table of 9
*Return: void
*/

void times_table(void)
{
int a, b, c;

for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; b++)
{
c = a * b;
if (c == 0)
{
putchar('0');
putchar(',');
putchar(' ');
putchar(' ');
}
else if (c > 0 && c <= 9)
{
putchar('0' + c);
putchar(',');
putchar(' ');
putchar(' ');
}
else
{
putchar('0' + c / 10);
putchar('0' + c % 10);
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
}
