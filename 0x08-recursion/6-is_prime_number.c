#include "holberton.h"
int checkNumber(int n, int f);
/**
 * is_prime_number - check whether a number is a prime
 * @n: the number to be checked
 *
 *Return: return 1 if the number is prime 0 otherwise
 */
int is_prime_number(int n)
{
	int factor = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);

	return (checkNumber(n, factor));
}
/**
 * checkNumber - functin that chek the prime number
 * @n: the given number
 * @f: the factor
 *
 * Return: 1 if the number is prime 0 otherwise
 */
int checkNumber(int n, int f)
{
	if (n % f == 0)
		return (0);
	if (f == (n / 2))
		return (1);
	return (checkNumber(n, f + 1));
}
