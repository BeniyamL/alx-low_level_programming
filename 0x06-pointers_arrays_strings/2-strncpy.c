#include "holberton.h"
/**
 * _strncpy - copy n character from source to destnination
 * @src: the source string
 * @dest: the destination string
 * @n: number of characters
 *
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n && src[i] != '\0'); i++)
	{
	dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
