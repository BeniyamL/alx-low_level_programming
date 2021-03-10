#include "function_pointers.h"
#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - functin that adds two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the sum of the a and b
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - functin that subtract two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the difference of the a and b
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplys two numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the multiplication of the a and b
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - functin that finds the division of numbers
 * @a: the first number
 * @b: the second number
 *
 * Return: the division of the a and b
 **/
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - functin that finds modules
 * @a: the first number
 * @b: the second number
 *
 * Return: the modules of the a and b
 **/
int op_mod(int a, int b)
{
	return (a % b);
}

