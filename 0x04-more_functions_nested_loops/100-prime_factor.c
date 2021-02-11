#include <stdio.h>
#include "holberton.h"
/**
 * main - find prime factor of a number
 *
 * Return: Always 0.
 */
int main(void)
{
long int max, i;
max = 612852475143;
i = 2;
while (max > i)
{
if (max % i == 0)
{
max = max / i;
i = i + 1;
}
else
{
i++;
}
}
printf("%ld\n", max);
return (0);
}
