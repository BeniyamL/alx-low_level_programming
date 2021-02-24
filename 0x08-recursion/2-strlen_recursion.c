#include "holberton.h"
/**
 * _strlen_recursion - function that finds the length of a a string
 * @s: the string to be counted
 *
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
