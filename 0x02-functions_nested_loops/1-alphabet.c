#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - prints the alphabet in lower case
 *Return: 0
 */
void print_alphabet(void)
{
char alpha;
alpha = 'a';

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return;
}
