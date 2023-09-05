#include <stdio.h>
#include "main.h"
/**
**_strcat - concatenates two strings
*@dest: the first string
*@src: the second string
*Return: orig
*/
char *_strcat(char *dest, char *src)
{
char *orig = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (orig);
}
