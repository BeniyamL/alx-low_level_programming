#include "search_algos.h"
/**
  * _binary_search - function to find a value in a given array
  * @array: the given array
  * @l: the left index of the array
  * @r: the right index of the array
  * @value: the value to be searched
  *
  * Return: the index, -1 otherwise
  */
int _binary_search(int *array, size_t l, size_t r, int value)
{
	size_t  i, m;

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (i == r)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		m = (l + r) / 2;
		if (value == array[m])
			return (m);
		else if (value < array[m])
			r = m - 1;
		else
			l = m + 1;
	}
	return (-1);
}

/**
 * exponential_search - function to perform exponetial search
 * @array: the given array
 * @size: the size of the array
 * @value: the value to be searched
 *
 * Return: the index of the value or -1 if it fails
 **/
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, r;

	if (size == 0 || array == NULL)
		return (-1);

	if (array[0] != value)
	{
		while (i < size && array[i] < value)
		{
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			i = i * 2;
		}
	}
	if (i < size)
		r = i;
	else
		r = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, r);
	return (_binary_search(array, i / 2, r, value));
}
