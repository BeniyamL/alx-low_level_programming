#include "holberton.h"
/**
 * _strpbrk - function that finds the first character that is found in other
 * @s: the string to be searched
 * @accept: the second string
 *
 * Return: the string point to the first character
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	j = 0;
	while (s[i])
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
		i++;
	}
	return ('\0');
}
