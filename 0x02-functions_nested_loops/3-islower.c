#include <stdio.h>
#include "holberton.h"
/**
 *_islower -checks whether a character is in lower case
 *@c: the character to be checked
 *
 * Description: alphabet must be written in lower case
 * Return: 1 for lower case 0 for other
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
{
return (0);
}
}
