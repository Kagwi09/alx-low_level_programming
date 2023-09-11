#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
**str_concat - concantetates two strings
*@s1: string 1
*@s2: string 2
*Return: Null or pointer to first string
*/
char *str_concat(char *s1, char *s2)
{
char *start;
int a;
int b;
a = 0;
b = 0;

if ((s1 == NULL) || (s2 == NULL))
{
return (NULL);
}
while (s1[a] != '\0')
{
a++;
}
while (s2[b] != '\0')
{
b++;
}
start = malloc((a + b + 1) * sizeof(char));

if (start == NULL)
{
return (NULL);
}
a = 0;
b = 0;

while (s1[a] != '\0')
{
start[a] = s1[a];
a++;
}
while (s2[b] != '\0')
{
start[a] = s2[b];
a++;
b++;
}
start[a] = '\0';
return (start);
}
