#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long x, y, z;
x = 1;
y = 2;
for (i = 1; i <= 98; i++)
{
if (i == 1)
{
printf("%lu, ", x);
printf("%lu, ", y);
}
z = x + y;
x = y;
y = z;
printf("%lu, ", z);
}
printf("%lu\n", z + x);
return (0);
}
