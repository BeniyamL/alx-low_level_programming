#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
int k;
int m;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = i; k < 10; k++)
{
for (m = j; m < 10; m++)
{
if (((i != j) || (j != k) || (i != m) || (j != m) || (k != m)) &&
(i + j) != (k + m))
{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(m + '0');
if (i != 9 || j != 8 || k != 9 || m != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
