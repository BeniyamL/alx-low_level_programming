#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - function to allocat a memory for values from min to max
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to a newly allocated memory
 **/
int *array_range(int min, int max)
{
	int i, size;
	int *memory;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	memory = malloc(size * sizeof(int));
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		memory[i] = min;
		min++;
	}
	return (memory);
}
