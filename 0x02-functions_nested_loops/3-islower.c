#include <stdio.h>
#include "main.h"

/**
*_islower - checks for lowercase letters
*Return: 1 if true, 0 if false
*@c: character to be checked
*/

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
