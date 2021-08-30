#include "search_algos.h"
/**
  * jump_search - function to find a value in a given array
  * @array: the given array
  * @size: the size of the array
  * @value: the value to be searched
  *
  * Return: the index, -1 otherwise
  */
int jump_search(int *array, size_t size, int value)
{
	size_t l, h;
	int jump = sqrt(size);

	if (size == 0 || array == NULL)
		return (-1);
	l = 0;
	h = 0;
	while (h < size && array[h] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", h, array[h]);
		l = h;
		h = l + jump;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", l, h);
	for (; l <= h && l < size; l++)
	{
		printf("Value checked array[%ld] = [%d]\n", l, array[l]);
		if (array[l] == value)
			return (l);
	}
	return (-1);
}
