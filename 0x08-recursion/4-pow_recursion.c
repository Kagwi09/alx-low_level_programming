#include <stdio.h>
#include "main.h"
/**
*_pow_recursion - return x to the power of y
*@x: the integer
*@y: the power
*Return: -1 if x is less than 0, 1 if its zero
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
{
return (-1);
}
else if (y == 0)
{
return (1);
}
else
{
return (x * _pow_recursion(x, y - 1));
}
return (0);
}
