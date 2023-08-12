#include <stdio.h>
/**
*main - Entry point, prints alphabet in reverse
*Return: Always 0 (Success)
*/

int main(void)
{
char alpha;
alpha = 'z';

while (alpha <= 'z' && alpha >= 'a')
{
putchar(alpha);
alpha--;
}
putchar('\n');
return (0);
}

