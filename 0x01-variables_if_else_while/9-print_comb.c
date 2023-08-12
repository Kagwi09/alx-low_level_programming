#include <stdio.h>
/**
*main - prits base 10 with commas and spaces
*Return: 0
*/

int main(void)
{
int n;
n = '0';

while (n >= '0' && n <= '9')
{
putchar(n);
n++;
if (n <= '9')
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
