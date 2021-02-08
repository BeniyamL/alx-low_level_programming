#include <stdio.h>
#include "holberton.h"
/**
 *_isalpha -checks whether a character is a letter
 *@c: the character to be checked
 *
 * Description: comparion is based on ascii value
 * Return: 1 for a letter 0 for other
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
}
