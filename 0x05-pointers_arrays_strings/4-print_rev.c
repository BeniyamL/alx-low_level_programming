#include "holberton.h"
/**
 * print_rev - print the string in revers order
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int i;
while (s[i] != '\0')
{
i++;
}
for (; i > 0; i--)
{
_putchar(s[i - 1]);
}
_putchar('\n');
}
