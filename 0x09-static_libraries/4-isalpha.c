#include <stdio.h>
#include "main.h"

/**
*_isalpha - checks if input is a letter
*Return: 1 if true 0 if false
*@c: character under scrutiny
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
