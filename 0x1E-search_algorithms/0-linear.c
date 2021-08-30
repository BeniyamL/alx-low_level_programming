#include "search_algos.h"
/**
  * linear_search - function to find a value in a given array
  * @array: the given array
  * @size: the size of the array
  * @value: the value to be searched
  *
  * Return: the index, -1 otherwise
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (size == 0 || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
