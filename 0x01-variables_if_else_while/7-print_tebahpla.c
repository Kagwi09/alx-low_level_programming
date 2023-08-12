#include <stdio.h>
/**
*main - prints alphabet in reverse
*Returns:0
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

