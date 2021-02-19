#include <stdio.h>
#include "holberton.h"
#include <unistd.h>
/**
 * ReduceTo100 - function that reduce a number
 * @n: the number to be printed
 * @sign: the sign of a number
 */
void ReduceTo100(int n, char sign)
{
	int temp, rmdr;
	int firstDigit, secondDigit;

	rmdr = n % 10;
	n = n / 10;

	if (n < 100 && n >= 10)
	{
		firstDigit = n / 10;
		secondDigit = n % 10;
		_putchar(sign);
		_putchar(firstDigit + '0');
		_putchar(secondDigit + '0');
	}
	else if (n < 10)
	{
		_putchar(sign);
		_putchar(n + '0');
	}
	else
	{
		ReduceTo100(n, sign);
	}
	_putchar(rmdr + '0');
}
/**
 * print_number - function that print a number using putchar
 * @n: the number to be printed
 */
void print_number(int n)
{
	char sign = '\0';
	int firstDigit, secondDigit;

	if (n < 0)
	{
		sign = '-';
		n = n * -1;
	}
	if (n >= 100)
	{
		ReduceTo100(n, sign);
	}
	else if (n < 100 && n >= 10)
	{
		firstDigit = n / 10;
		secondDigit = n % 10;
		_putchar(sign);
		_putchar(firstDigit + '0');
		_putchar(secondDigit + '0');
	}
	else
	{
		_putchar(sign);
		_putchar(n + '0');
	}
}
