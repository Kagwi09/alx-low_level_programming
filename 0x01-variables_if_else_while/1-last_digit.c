#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - determines if last number is greater than 5,6 or 0
*Return: 0
*/

int main(void)
{
int n;
int m;

srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m > 5)
{
printf("Last digit of %d is %d and is greater tha five\n", n, m);
}
else if (m == 0)
{
printf("Last didt of %d is %d and is equal to 0\n", n, m);
}
else if (m < 6 && m != 0)
{
printf("Last digit of %d is %d and and is less than 6 and not 0\n", n, m);
}
return (0);
}

