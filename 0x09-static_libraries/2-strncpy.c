#include <stdio.h>
#include "main.h"
/**
**_strncpy - copies a string
*@dest: the destination string
*@src: the source string
*@n: number of characters in src
*Return: orig
*/
char *_strncpy(char *dest, char *src, int n)
{
char *orig = dest;

while ((*src != '\0') && (n > 0))
{
*dest = *src;
dest++;
src++;
n--;
}
while (n > 0)
{
*dest = '\0';
dest++;
n--;
}
return (orig);
}
