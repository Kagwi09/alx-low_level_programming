#include <stdio.h>
#include "main.h"
/**
*puts2 - prints every other character of a string
*starting with the first character.
*@str: string
*/
void puts2(char *str)
{
int length;
length = 0;

while (str[length] != '\0')
{
putchar(str[length]);
length += 2;
}
putchar('\n');
}
