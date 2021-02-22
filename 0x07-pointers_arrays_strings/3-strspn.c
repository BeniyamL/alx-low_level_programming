#include "holberton.h"
/**
 * _strspn - function finds the length of the matched characters
 * @s: the string to be searched
 * @accept: the second string
 *
 * Return: the number of matched character
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	i = 0;
	n = 0;

	while (accept[i])
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
			else if (accept[index + 1] == '\0')
				return (n);
		}
		i++;
	}
	return (n);
}
