#include "holberton.h"
/**
 * _print_rev_recursion - function that prints string in reverse direction
 * @s: the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}

}
