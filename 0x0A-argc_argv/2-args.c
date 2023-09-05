#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main - prints all arguements
*@argc: number of arguements
*@argv: number of vectors
*Return: 0
*/
int main(int argc, char *argv[])
{
int a;

if (argc >= 0)
{
for (a = 0; a < argc; a++)
{
printf("%s\n", argv[a]);
}
}
return (0);
}
