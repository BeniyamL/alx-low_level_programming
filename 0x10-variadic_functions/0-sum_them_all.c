#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that finds sum of a list
 * @n: the number of list
 *
 * Return: the sum of a list
 **/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i,
	int sum;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
