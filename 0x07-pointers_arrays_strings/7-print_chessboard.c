#include <stdio.h>
#include "main.h"
/**
*print_chessboard - prits chessboard
*@a: the arryay
*
*
*/
void print_chessboard(char (*a)[8])
{
int row;
int col;

for (row = 0; row < 8; row++)
{
for (col = 0; col < 8; col++)
{
putchar(a[row][col]);
}
putchar('\n');
}
}
