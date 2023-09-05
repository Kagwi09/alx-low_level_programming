#include <stdio.h>
#include "main.h"
/**
**_strstr - finds the first occurrence of the substring
*@haystack: the main string
*@needle: the substring
*Return: a
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != 0)
{
char *a = needle;
char *b = haystack;

while ((*b == *a) && (*a != '\0'))
{
a++;
b++;
}
if (*a == '\0')
{
return (haystack);
}
haystack++;
}
return (NULL);
}
