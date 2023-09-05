#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - prints number of arguements passed
*@argc: number of arguements
*@argv: number of vectors
*Return:0
*/
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
