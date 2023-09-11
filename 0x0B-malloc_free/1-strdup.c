#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
**_strdup - duplicates a string
*@str: the string
*Return: NULL or pointer to start of dulpicate
*
*/
char *_strdup(char *str)
{
char *start;
int a;
int b;
a = 0;
b = 0;

if (str == NULL)
{
return (NULL);
}
a = 0;
while (str[a] != '\0')
{
a++;
}
start = malloc((a + 1) * sizeof(char));
if (start == NULL)
{
return (NULL);
}

for (b = 0; str[b]; b++)
{
start[b] = str[b];
}
return (start);
}
