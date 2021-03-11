#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints a list of a string
 * @separator: the character to separate a list
 * @n: the number of a list
 *
 * Return: Nothing
 **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *s;

	va_start(list, n);
	if (separator == NULL)
		return;
	for (i = 0; i < n; i++)
	{
		s = va_arg(list, char *);
		if (s == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
