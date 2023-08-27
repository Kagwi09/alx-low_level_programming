#include <stdio.h>
#include "main.h"
/**
*_strcmp - compares two strings
*@s1: the first string
*@s2: the second string
*Return: the differece in values
*/
int _strcmp(char *s1, char *s2)
{
int diff;
diff = *s1 - *s2;

while ((*s1 != '\0') && (*s2 != '\0'))
{
if (*s1 != *s2)
{
return (diff);
}
s1++;
s2++;
}
return (diff);
}

