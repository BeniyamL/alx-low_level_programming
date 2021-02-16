#include <stdio.h>
/**
 * print_array - print the n array
 * @a: array to be printed
 * @n: the no of array element to be printed
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
{
printf(", ");
}
}
printf("\n");
}
