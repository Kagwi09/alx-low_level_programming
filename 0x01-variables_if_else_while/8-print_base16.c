#include <stdio.h>
/**
*main - prints numbers of base 16
*Return: 0
*/

int main(void)
{
int number;
char alpha;
number = '0';
alpha = 'a';

while (number >= '0' && number <= '9')
{
putchar(number);
number++;
}
while (alpha >= 'a' && alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
