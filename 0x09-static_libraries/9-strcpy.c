#include <stdio.h>
#include "main.h"
/**
**_strcpy - that copies the string pointed to by src,
* including the terminating null byte (\0), to the buffer pointed to by dest.
* @dest: a buffer
* @src: the string
* Return: orig
*/
char *_strcpy(char *dest, char *src)
{
char *orig = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (orig);
}
