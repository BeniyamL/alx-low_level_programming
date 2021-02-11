#include <stdio.h>
#include "holberton.h"
/**
 * print_triangle - print triangle
 * @size: the size of the triangel
 */
void print_triangle(int size)
{
int i, j, k;
for (i = size; i >= 0; i--)
{
for (j = 0; j < i ; j++)
{
_putchar(' ');
}
for (k = j; k < size; k++)
{
_putchar('#');
}
_putchar('\n');
}
if (size < 0)
{
_putchar('\n');
}
}
