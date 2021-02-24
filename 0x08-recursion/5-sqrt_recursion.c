#include "holberton.h"
int _sqrt(int n, int i);
/**
 * _sqrt_recursion - functin that finds the square root of a number
 * @n: the number where the square root is determined
 *
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (_sqrt(n, 1));

}
/**
 * _sqrt - find square root
 * @n: the given number
 * @i: the base number
 * Return: base number on success -1 otherwise
*/
int _sqrt(int n, int i)
{
	int rslt = i * i;

	if (n < rslt)
		return (-1);
	else if (n == rslt)
		return (i);
	else
		return (_sqrt(n, i + 1));
}
