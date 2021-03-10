#include "function_pointers.h"
/**
 * array_iterator - function that iterate a given array
 * @array: the given array
 * @size: the size of the array
 * @action: the pointer function
 *
 * Return: noting
 **/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
