#include "main.h"
#include <stdio.h>
/**
*puts_half -  prints half of a string
*@str: the string
*/
void puts_half(char *str)
{
int end;
int middle;
end = 0;

while (str[end] != '\0')
{
end++;
}

if (end % 2 == 0)
{
middle = end / 2;
}
else
{
middle = (end - 1) / 2;
middle++;
}
for (; middle < end; middle++)
{
putchar(str[middle]);
}
putchar('\n');
}
