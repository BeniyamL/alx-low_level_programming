#include "holberton.h"
/**
 * _memset - function that fill a source with some value
 * @s: the string to be filled
 * @b: the value that must be filled
 * @n: the number of bytes that string will be filled
 *
 * Return: the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
