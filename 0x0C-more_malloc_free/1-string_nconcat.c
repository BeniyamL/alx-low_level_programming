#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenate first and n character of second string
 * @s1: the first string
 * @s2: the second string
 * @n: the nth character of s2 to be concatenated
 *
 * Return: the concatenated string
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newarray;
	unsigned int i, size1, size2, index;

	size1 = 0;
	size2 = 0;
	index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		size1++;
	for (i = 0; s2[i]; i++)
		size2++;
	if (n >= size2)
		newarray = malloc((size1 + size2 + 1) * sizeof(char));
	else
		newarray = malloc((size1 + n + 1) * sizeof(char));
	if (newarray == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		newarray[index] = s1[i];
		index++;
	}
	for (i = 0; i < n; i++)
	{
		newarray[index] = s2[i];
		index++;
	}
	newarray[index] = '\0';
	return (newarray);
}
