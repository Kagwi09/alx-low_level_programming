#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
**create_array - creates an array
*@size: number of elements in array
*@c: the array
*Return: Null or a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
unsigned int a;
char *start;


if (size == 0)
{
return (NULL);
}


start = (char *)malloc(size * sizeof(char));

if (start == NULL)
{
return (NULL);
}
for (a = 0; a < size; a++)
{
start[a] = c;
}
return (start);
}
