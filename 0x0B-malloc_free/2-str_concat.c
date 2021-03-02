#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - function that concatenate two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the concatenated string
 **/
char *str_concat(char *s1, char *s2)
{
	char *newarray;
	unsigned int i, size, index;

	size = 0;
	index = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i]; i++)
		size++;
	for (i = 0; s2[i]; i++)
		size++;
	newarray = malloc((size + 1) * sizeof(char));
	if (newarray == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		newarray[index] = s1[i];
		index++;
	}
	for (i = 0; s2[i]; i++)
	{
		newarray[index] = s2[i];
		index++;
	}
	newarray[index] = '\0';
	return (newarray);
}
