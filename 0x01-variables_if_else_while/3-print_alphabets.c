#include <stdio.h>
/**
*main - prints alphabet in both cases
*Return: 0
*/

int main(void)
{
char alpha;
char notalpha;
alpha = 'a';
notalpha = 'A';

while (alpha >= 'a' && alpha <= 'z')
{
putchar(alpha);
alpha++;
}
while (notalpha >= 'A' && notalpha <= 'Z')
{
putchar(notalpha);
notalpha++;
}
putchar('\n');
return (0);
}
