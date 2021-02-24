#include "holberton.h"
/**
 * _puts_recursion - functin that prints a string using recursion
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}

}
