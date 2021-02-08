#include "holberton.h"
#include <stdio.h>
/**
 * print_times_table - find time table up to n
 * @n: the final number
 *
 * Description: times table using nested loop
 */
void print_times_table(int n)
{
int i;
int j;
int p;
if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
p = i * j;
if (p < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(p + '0');
}
else if (p >= 10 && p < 100)
{
_putchar(' ');
_putchar((p / 10) + '0');
_putchar((p % 10) + '0');
}
else if (p >= 100)
{
_putchar((p / 100) + '0');
_putchar(((p / 10) % 10) + '0');
_putchar((p % 10) + '0');
}
if (j != n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
}
