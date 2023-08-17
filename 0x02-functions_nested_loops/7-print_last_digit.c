#include <stdio.h>
#include "main.h"
/**
*print_last_digit - prits the last digit of an integer
*@a: the interger
*@b; the last digit of an interger
*Return: b
*/
int print_last_digit(int a)
{
int b;
b = a % 10;
if (b < 0)
{
b = -b;
_putchar('0' + b);
}
else
{
_putchar('0' + b);
}
return (b);
}
