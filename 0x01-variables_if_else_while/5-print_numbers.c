#include <stdio.h>
/**
*main - prints numbers in base 10
*Return: 0
*/

int main(void)
{
int b;
b = '0';

while (b >= '0' && b <= '9')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
