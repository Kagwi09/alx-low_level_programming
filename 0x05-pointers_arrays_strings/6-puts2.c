#include <stdio.h>
#include "main.h"
/**
*puts2 - prints every other character of a string
*starting with the first character.
*@str: string
*/
void puts2(char *str)
{
int start;
int end;
end = 0;

while (str[end] != '\0')
{
end++;
}
for (start = 0; start < end; start += 2)
{
putchar(str[start]);
}
putchar('\n');
}
