#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_all(const char * const format, ...);
void print_integer(va_list singlevalue);
void print_char(va_list singlevalue);
void print_float(va_list singlevalue);
void print_string(va_list singlevalue);
/**
 * print_all -  function that prints any value
 * @format: the given format
 *
 * Return: nothing
 **/
void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *separator = "";
	type_print_all selector[] = {
	{"c", print_char},
	{"i", print_integer},
	{"f", print_float},
	{"s", print_string}
	};

	va_start(list, format);
	i = 0;
	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if ((format[i]) == *(selector[j].sym))
			{
				printf("%s", separator);
				selector[j].fun(list);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
/**
 * print_integer - function to print only integers
 * @singlevalue: the given value
 *
 * Return: nothing
 **/
void print_integer(va_list singlevalue)
{
	int n;

	n = va_arg(singlevalue, int);
	printf("%d", n);
}
/**
 * print_char - functin that prints a character
 * @singlevalue: the given value
 *
 * Return: nothing
 **/
void print_char(va_list singlevalue)
{
	char c;

	c = va_arg(singlevalue, int);
	printf("%c", c);
}

/**
 * print_float - functin that prints a character
 * @singlevalue: the given value
 *
 * Return: nothing
 **/
void print_float(va_list singlevalue)
{
	double f;

	f = va_arg(singlevalue, double);
	printf("%f", f);
}
/**
 * print_string - functin that prints a character
 * @singlevalue: the given value
 *
 * Return: nothing
 **/
void print_string(va_list singlevalue)
{
	char *s;

	s = va_arg(singlevalue, char *);
	if (s == NULL)
		printf("%s", "(nil)");
	else
		printf("%s", s);
}

