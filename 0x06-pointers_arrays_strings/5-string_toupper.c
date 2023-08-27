#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
**string_toupper - converts characters in string to uppercase
*Return: orig
*@s: the string
*/
char *string_toupper(char *s)
{
char *orig = s;

while (*s != '\0')
{
if (islower(*s))
{
*s = toupper(*s);
}
s++;
}
return (orig);
}
