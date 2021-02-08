#include "holberton.h"
#include <stdio.h>
/**
 *print_last_digit -finds last digit of a number
 *@n: the number to be checked
 *
 * Description: calculation is based on %
 * Return: last digit of a n
 */
int print_last_digit(int n)
{
int lastDigit;
lastDigit = n % 10;
if (n < 0)
{
lastDigit = -1 * lastDigit;
}
_putchar(lastDigit + '0');
return (lastDigit);
}
