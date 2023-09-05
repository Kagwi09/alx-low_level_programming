#include <stdio.h>
#include "main.h"
/**
*_isupper - checks if input is an uppercase letter
*Return: 1 if uppercase 0 if not
*@c: character under consideration
*/
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
