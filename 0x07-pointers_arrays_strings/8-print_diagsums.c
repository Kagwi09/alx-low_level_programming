#include <stdio.h>
#include "main.h"
/**
*print_diagsums - prints the sums of diagonals
*@a: the array
*@size: size of array
*/
void print_diagsums(int *a, int size)
{
int b;
int diagonal1;
int diagonal2;
diagonal1 = 0;
diagonal2 = 0;

for (b = 0; b < size; b++)
{
diagonal1 += a[b * size + b];
diagonal2 += a[b * size + (size - 1 - b)];
}
printf("%d, %d\n", diagonal1, diagonal2);
}
