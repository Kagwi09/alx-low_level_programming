#include <stdio.h>
#include "main.h"
/**
*print_sign - determines if input is positive, network or 0
*Return: 1 if postive, 0 if zero, -1 if negative
*@n: integer under scrutiny
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
