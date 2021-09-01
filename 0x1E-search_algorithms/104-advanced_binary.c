#include "search_algos.h"
/**
  * binary_search_recursive - function to find a value in a given array
  * @array: the given array
  * @l: the first end of the array
  * @r: the endex of the array
  * @value: the value to be searched
  *
  * Return: the index, -1 otherwise
  */
int binary_search_recursive(int *array, size_t l, size_t r, int value)
{
	size_t i, m;

	if (l > r)
		return (-1);
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
		return(binary_search_recursive(array, l, m - 1, value));
	else
		return(binary_search_recursive(array, m + 1, r, value));
}
/**
 * advanced_binary - function to search using recursive approch
 * @array: the given array
 * @size: the size of the array
 * @value: the value to be searched
 *
 * Return: the index, -1 otherwise
 **/
int advanced_binary(int *array, size_t size, int value)
{
	if (size == 0 || array == NULL)
		return (-1);
	return(binary_search_recursive(array, 0, size - 1, value));
}
