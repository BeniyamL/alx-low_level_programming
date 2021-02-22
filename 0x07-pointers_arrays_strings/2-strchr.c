#include "holberton.h"
/**
 * _strchr - function that finds the first occurence of a character
 * @s: the string to be searched
 * @c: the required character
 *
 * Return: sub string from the occurence of the required character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	if (s == '\0')
	{
		return ('\0');
	}
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}
	return ('\0');
}
