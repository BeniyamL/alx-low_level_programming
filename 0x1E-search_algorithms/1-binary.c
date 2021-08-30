#include "search_algos.h"
/**
  * binary_search - function to find a value in a given array
  * @array: the given array
  * @size: the size of the array
  * @value: the value to be searched
  *
  * Return: the index, -1 otherwise
  */
int binary_search(int *array, size_t size, int value)
{
	size_t  i, l, m, r;

	if (size == 0 || array == NULL)
		return (-1);
	r = size - 1;
	l = 0;
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
