#include <stdio.h>
#include "main.h"
/**
*print_alphabet_x10 - prints the alphabet in lower case ten times
*Return: 0
*/
void print_alphabet_x10(void)
{
int row;
char alpha;
row = 48;

for (row = 48; row <= 57; row++)
{
alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha++;
}
putchar('\n');
}
alpha = 'a';
return;
}
