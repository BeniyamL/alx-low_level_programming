#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - natural numbers from n to 98
 * @n: the first number
 *
 * Description: natural number based on comparison
 * Return: natural number up to 98
 */
void print_to_98(int n)
{
int i;
if (n > 98)
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
}
else
{
for (i = n; i <= 97; i++)
{
printf("%d, ", i);
}
}
printf("98\n");
}

