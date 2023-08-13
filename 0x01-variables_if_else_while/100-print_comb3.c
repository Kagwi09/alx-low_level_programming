#include <stdio.h>
/**
*main - prints all combiations of two digit numbers
*Return: 0
*/

int main(void)
{
int i;
int j;
i = '0';

for (i = '0'; i <= '8'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
putchar(i);
putchar(j);
if (i != '8')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
