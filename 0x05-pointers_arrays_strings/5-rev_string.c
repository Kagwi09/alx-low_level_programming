#include "main.h"
/**
*rev_string - reverses a string.
*@s: the string
*/
void rev_string(char *s)
{
int str;
char temp;
int start;
int end;

str = 0;

while (s[str] != '\0')
{
str++;
}

for (start = 0, end = str - 1; start < end; start++, end--)
{
temp = s[start];
s[start] = s[end];
s[end] = temp;
}
}
