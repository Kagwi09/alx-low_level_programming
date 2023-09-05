#include <stdio.h>
#include "main.h"
/**
**_memset - fills memory with a constant byte.
*@s: memory area
*@b: constant byte
*@n: number of characters in array
*Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int m;

for (m = 0; m < n; m++)
{
s[m] = b;
}
return (s);
}
