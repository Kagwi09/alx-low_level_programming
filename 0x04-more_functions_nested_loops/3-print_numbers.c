#include <stdio.h>
#include "main.h"
/**
*print_numbers - prints numbers between 0 and 9
*Returns: void
*/
void print_numbers(void)
{
int a;

for (a = 0; a < 10; a++)
{
putchar(a + '0');
}
putchar('\n');
}
