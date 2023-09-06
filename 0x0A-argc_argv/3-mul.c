#include <stdio.h>
#include <stdlib.h>
/**
*main - prits the product of two numbers
*@argc: arguement count
*@argv: arguement vector
*Return: 0
*/
int main(int argc, char *argv[])
{
int a;
int mul;
mul = 1;

if (argc > 1)
{
for (a = 1; a < argc; a++)
{
mul *= atoi(argv[a]);
}
printf("%d\n", mul);
return (0);
}
if (argc != 3)
{
printf("Error\n");
return (1);
}
return (0);
}
