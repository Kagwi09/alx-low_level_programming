#include <stdio.h>
#include "main.h"

/**
*jack_bauer - prints the clock in 24 hr
*
*
*Return: void
*/
void jack_bauer(void)
{
int hr;
int min;
for (hr = 0; hr < 24; hr++)
{
for (min = 0; min < 60; min++)
{
putchar('0' + hr / 10);
putchar('0' + hr % 10);
putchar(':');
putchar('0' + min / 10);
putchar('0' + min % 10);
putchar('\n');
}

}
return;
}

