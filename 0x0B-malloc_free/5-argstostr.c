#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - function that concatenates all argument of the program
 * @ac: the number of arguments
 * @av: all arguments of the program
 *
 * Return: the concatenated string
 **/
char *argstostr(int ac, char **av)
{
	char *newarray;
	int i, j, size, index;

	size = 0;
	index = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			size++;
		size += 1;
	}
	if (size == 0)
		return (NULL);
	newarray = malloc((size + 1) * sizeof(char));
	if (newarray == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newarray[index] = av[i][j];
			index++;
		}
		newarray[index] = '\n';
		index++;
	}
	newarray[index] = '\0';
	return (newarray);
}
