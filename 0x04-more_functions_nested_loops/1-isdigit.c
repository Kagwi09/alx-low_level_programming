#include <stdio.h>
#include "main.h"
/**
*_isdigit - checks if input is an integer
*Return: 1 if true 0 if false
*@c: character under consideration
*/
int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
{
return (1);
}
else
{
return (0);
}
}
