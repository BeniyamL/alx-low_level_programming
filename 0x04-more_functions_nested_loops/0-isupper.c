#include <stdio.h>
#include "holberton.h"
/**
 * _isupper - checks whether a charcter is in upper case
 * @c: the character to be checked
 *
 * Description: comparison based on aschii values
 * Return: returns 1 for succes 0 otherwise
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
