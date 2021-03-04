#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - function to allocat a memory for array of of a given size
 * @nmemb: the block of an array
 * @size: the size of an array
 * Return: pointer to a newly allocated memory
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *memory;

	if (nmemb == 0 || size == 0)
		return (NULL);
	memory = malloc(nmemb * size);
	if (memory == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		memory[i] = 0;
	return (memory);
}
