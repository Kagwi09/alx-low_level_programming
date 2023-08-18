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

if (c <= 9)
{
putchar(' ');
putchar(' ');
putchar('0' + c);
}
else
{
putchar(' ');
putchar('0' + c / 10);
putchar('0' + c % 10);
}
if (b != 9)
{
putchar(',');
}
}
putchar('\n');
}
}

