#include <stdio.h>
/**
*main - prints the alphabt
*Return: (0)
*/

int main(void)
{
char alpha;
alpha = 'a';

while (alpha >= 'a' && alpha <= 'z')
{
if (alpha != 'q' && alpha != 'e')
{
putchar(alpha);
}
alpha++;
}
putchar('\n');
return (0);
}

