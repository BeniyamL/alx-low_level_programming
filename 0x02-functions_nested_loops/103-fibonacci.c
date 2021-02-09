#include <stdio.h>
#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
unsigned long x, y, z, s;
z = 0;
x = 0;
y = 1;
s = 0;
while (z <= 4000000)
{
z = x + y;
x = y;
y = z;
if (z % 2 == 0)
{
s += z;
}
}
printf("%lu\n", s)
return (0);
}
