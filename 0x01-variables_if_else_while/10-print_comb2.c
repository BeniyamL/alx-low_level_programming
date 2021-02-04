#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for (int i = 0; i <100; i++)
{
putchar((i % 10) + '0');
putchar((i % 10) + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
