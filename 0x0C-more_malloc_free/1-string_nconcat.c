#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
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
a = strlen(s1);
b = strlen(s2);

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

start = malloc((a + b + 1) * sizeof(char));

if (start == NULL)
{
return (NULL);
}
strncpy(start, s1, a);
strncpy(start + a, s2, n);

start[a + b + 1] = '\0';
return (start);
}

