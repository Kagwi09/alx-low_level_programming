#include <stdio.h>
#include "main.h"
/**
**_memcpy - copies memory area.
*@dest: memory area 1
*@src: memory area 2
*@n: the number of characters in array
*Return: orig
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *orig = dest;
unsigned int i;

while (i < n)
{
*dest = *src;
dest++;
src++;
i++;
}
return (orig);
}
