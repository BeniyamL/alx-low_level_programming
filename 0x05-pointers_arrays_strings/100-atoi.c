#include "holberton.h"
/**
 * _atoi - convert string to integer
 * @s: the string to be converted
 *
 * Return: the equivalent integer value
 */
int _atoi(char *s)
{
int j, n, sign;
j = 0;
n = 0;
sign = 1;
while (s[j] != '\0')
{
if (s[j] >= '0' && s[j] <= '9')
{
n = (n * 10) + (s[j] - '0');
}
if (n != 0 && !(s[j] >= '0' && s[j] <= '9'))
{
break;
}
if (s[j] == '-')
{
sign = sign * -1;
}
j++;
}
return (sign *n);
}
