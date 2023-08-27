#include <stdio.h>
#include "main.h"
/**
**_strncat - concatenates two strings
*@dest: string 1
*@src: string 2
*@n: number of characters in string 2
*Return: orig
*/
char *_strncat(char *dest, char *src, int n)
{
char *orig = dest;

while (*dest != '\0')
{
dest++;
}
while ((*src != '\0') && (n > 0))
{
*dest = *src;
dest++;
src++;
n--;
}
*dest = '\0';
return (orig);
}
