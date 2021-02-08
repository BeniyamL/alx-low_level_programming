#include <stdio.h>
#include "holberton.h"
/**
 *print_sign -print the sign of a number
 *@n: the character to be checked
 *
 * Description: comparion is based on integer
 * Return: 1 for a positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
