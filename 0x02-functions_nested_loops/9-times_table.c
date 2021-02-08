#include "holberton.h"
#include <stdio.h>
/**
 *times_table -finds time table for 1-9 range
 */
void times_table(void)
{
int i;
int j;
int p;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
p = i * j;
if (p < 10)
{
_putchar(' ');
_putchar(p + '0');
}
else if (p >= 10)
{
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
if (j != 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
