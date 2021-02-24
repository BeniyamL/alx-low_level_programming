#include "holberton.h"
/**
 * _pow_recursion - function that finds x raised to y
 * @x: the base number
 * @y: the exponent
 *
 * Return: the the value of x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
