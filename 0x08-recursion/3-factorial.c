#include <stdio.h>
#include "main.h"
/**
*factorial - prits the factorial of a number
*@n: the number
*Return: -1 if less than 0, 1 if 0
*/
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}
else
{
return (n * factorial(n - 1));
}
return (0);
}
