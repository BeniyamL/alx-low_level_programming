#include "function_pointers.h"
/**
 * int_index - function that searches for a number
 * @array: the given array
 * @size: the size of the array
 * @cmp: the pointer to the function
 *
 * Return: the index of the array
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (size < 0) || (cmp == NULL))
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] != 0)
			return (i);
	}
	return (-1);
}
