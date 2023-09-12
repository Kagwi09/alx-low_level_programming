#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*string_nconcat - concantetates two strings
*@s1: string 1
*@s2: string 2
*@n: number of elements in s2
*Return: start
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *start;
size_t a;
size_t b;
a = 0;
b = 0;

if (s1 == NULL)
{
return (NULL);
}
if (s2 == NULL)
{
return (NULL);
}
if (n >= b)
{
n = b;
}

start = malloc((a + n + 1) * sizeof(char));

if (start == NULL)
{
return (NULL);
}
while (s1[a] != '\0')
{
start[a] = s1[a];
a++;
}
while (s2[n] != '\0')
{
start[a] = s2[n];
a++;
n++;
}
start[a] = '\0';
return (start);
}

