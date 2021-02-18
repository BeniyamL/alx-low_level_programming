#include "holberton.h"
/**
 * reverse_array - reverse a given array
 * @a: the given array
 * @n: the size of an array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	for (i = 0; i < n; i++)
	{
		temp = a[n - 1];
		a[n - 1] = a[i];
		a[i] = temp;
		n--;
	}
}
