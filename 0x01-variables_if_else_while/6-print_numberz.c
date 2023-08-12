#include <stdio.h>
/**
*main - prints numbers of base 10
*Return: 0
*/

int main(void)
{
char b;
b = '0';

while (b >= '0' && b <= '9')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
