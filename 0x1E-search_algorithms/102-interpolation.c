#include "search_algos.h"
/**
  * interpolation_search - function to find a value in a given array
  * @array: the given array
  * @size: the size of the array
  * @value: the value to be searched
  *
  * Return: the index, -1 otherwise
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t  l, p, r;

	if (size == 0 || array == NULL)
		return (-1);
	r = size - 1;
	l = 0;
	while (l <= r)
	{
		p = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (p < size)
			printf("Value checked array[%ld] = [%d]\n", p, array[p]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", p);
			break;
		}
		if (value == array[p])
			return (p);
		else if (value < array[p])
			r = p - 1;
		else
			l = p + 1;
	}
	return (-1);
}
