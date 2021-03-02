#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - function that create an array
 * @size: the size of the array
 * @c: the initialized character
 *
 * Return: the initialized array
 **/
char *create_array(unsigned int size, char c)
{
	char *newarray;
	unsigned int i;

	if (size == 0)
		return (NULL);
	newarray = malloc(size * sizeof(char));
	if (newarray == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		newarray[i] = c;
	}
	return (newarray);
}
