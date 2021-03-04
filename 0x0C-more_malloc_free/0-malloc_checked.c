#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - function to allocate a memory
 * @b: the block to be created
 *
 * Return: pointer to a newly allocated memory
 **/
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (memory == NULL)
		exit(98);
	return (memory);
}
