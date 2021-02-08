#include "holberton.h"
#include <stdio.h>
/**
 *_abs -finds absolute valule of a number
 *@n: the character to be checked
 *
 * Description: comparion is based on integer
 * Return: 1 for a positive, 0 for zero, -1 for negative
 */
int _abs(int n)
{
if (n > 0)
{
return (n);
}
else if (n < 0)
{
return (-1 * n);
}
else
{
return (0);
}
}
