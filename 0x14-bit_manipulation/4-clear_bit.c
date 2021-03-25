#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * clear_bit - set nth value at index to 0
 * @n: the given bit
 * @index: the given index
 *
 * Return: 1 for success -1 otherwise
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * index)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
