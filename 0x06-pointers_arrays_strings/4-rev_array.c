#include "holberton.h"
/**
 * reverse_array - reverse a given array
 * @a: the given array
 * @n: the size of an array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int x[n];

	i = 0;
	j = n;
	while (i < n)
	{
		x[i] = a[j - 1];
		j--;
		i++;
	}
	for (; j < i; j++)
	{
		a[j] = x[j];
	}
}
