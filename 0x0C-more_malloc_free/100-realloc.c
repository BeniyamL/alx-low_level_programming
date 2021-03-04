#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - function to reallocat a memory
 * @ptr: the old memory
 * @old_size: the size of old array
 * @new_size: the size of new array
 * Return: pointer to a newly allocated memory
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *memory;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		memory = malloc(new_size);
		if (memory == NULL)
			return (NULL);
		return (memory);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	memory = malloc(new_size);
	for (i = 0; i < old_size && i < new_size; i++)
		memory[i] = ((char *)ptr)[i];
	return (memory);
}
