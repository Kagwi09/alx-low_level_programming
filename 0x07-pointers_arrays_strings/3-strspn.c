#include <stdio.h>
#include "main.h"
/**
*_strspn - gets the length of a prefix substring
*@s: the main string
*@accept: the substring
*Return: elements
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int elements;
elements = 0;

while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
elements++;
break;
}
a++;
}
if (*a == '\0')
{
break;
}
s++;
}
return (elements);
}
