#include "holberton.h"
/**
 * _memcpy - function that string from source to destination
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes that will be copied
 *
 * Return: the new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
