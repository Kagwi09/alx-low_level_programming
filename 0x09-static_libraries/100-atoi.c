#include <stdio.h>
#include "main.h"
#include <limits.h>
/**
*_atoi - converts a string to an integer
*@s: the string
*Return: n
*/

int _atoi(char *s)
{
int c;
unsigned int n;
int m;
int i;
c = 0;
n = 0;
m = 1;
i = 0;

while (s[c])
{
if (s[c] == 45)
{
m *= -1;
}
while ((s[c] >= 48) && (s[c] <= 57))
{
i = 1;
n = ((n * 10) + (s[c] - '0'));
c++;
}
if (i == 1)
{
break;
}
c++;
}
n *= m;
return (n);
}
