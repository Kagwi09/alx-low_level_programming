#include <stdio.h>
#include "main.h"

/**
*print_alphabet_x10 - prints alphabet ten times
*Return: void
*/

void print_alphabet_x10(void)
{
int row;
char alpha;
row = 0;
alpha = 'a';

while (row < 10)
{
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
}
putchar('\n');
row++;
return;
}
