#include <stdio.h>
#include "main.h"
/**
*print_most_numbers - prints most numbers
*Return: void
*/
void print_most_numbers(void)
{
int a;

for (a = 0; a < 10; a++)
{
if ((a != 2) && (a != 4))
{
putchar(a + '0');
}
}
putchar('\n');
}
