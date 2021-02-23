#include "holberton.h"
/**
 * compare - check wheter the needle found
 * @needle: the string that must be searched
 * @haystack: the source string
 *
 * Return: 1 on succes 0 otherwise
 */
int compare(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		if (haystack[i] == '\0')
			return (0);
		if (haystack[i] != needle[i])
			return (0);
	}
	return (1);
}
/**
 * _strstr - function that finds occurence of substring
 * @needle: the string to be searched
 * @haystack: the original string
 *
 * Return: the string that is found
 */
char *_strstr(char *haystack, char *needle)
{
	int j;

	if (needle[0] == '\0')
		return (haystack);

	for (j = 0; haystack[j] != '\0'; j++)
	{
		if (needle[0] == haystack[j])
		{
			if (compare(&haystack[j], needle) == 1)
				return (&haystack[j]);
		}
	}
	return ('\0');
}

