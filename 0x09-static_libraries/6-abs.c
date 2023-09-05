#include <stdio.h>
#include "main.h"

/**
*_abs - prints the  bsolute value of an integer
*@a: variable
*Return: the absolute value of a number
*/

int _abs(int a)
{
if (a < 0)
{
return (-a);
}
else if (a > 0)
{
return (a);
}
else
{
return (0);
}
}
