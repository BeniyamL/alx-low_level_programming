#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - function that dupulicate an array
 * @str: the given array
 *
 * Return: the duplicated array
 **/
char *_strdup(char *str)
{
	char *newarray;
	unsigned int i, size;

	size = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		size++;
	newarray = malloc((size + 1) * sizeof(char));
	if (newarray == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		newarray[i] = str[i];
	}
	newarray[size] = '\0';
	return (newarray);
}
