#include "main.h"
/**
* _strlen - this function returns the length of a string
*@s: the string
*Return: l
*/
int _strlen(char *s)
{
int l;
l = 0;

while (*s != '\0')
{
l++;
s++;
}
return (l);
}
