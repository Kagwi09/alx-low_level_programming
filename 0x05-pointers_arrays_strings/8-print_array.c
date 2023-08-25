#include <stdio.h>
#include "main.h"
/**
*print_array -  prints n elements of an array of integers
*@a: pointer pointing to the first element
*@n: the number of elements in array
*/
void print_array(int *a, int n)
{
int b;

for (b = 0; b < n; b++)
{
printf("%d", a[b]);

if (b < n - 1)
{
printf(", ");
}
}
printf("\n");
}
