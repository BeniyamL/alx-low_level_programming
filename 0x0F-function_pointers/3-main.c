#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - the beginining of the function execution
 * @ac: the number of arguments
 * @argv: all arguments
 *
 * Return: always success
 */
int main(int  ac, char *argv[])
{
	int num1, num2, result;
	char *op;

	if (argv == NULL || ac != 4)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	op = argv[2];
	if ((*op == '/' || *op == '%') && num2 == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("%s\n", "Error");
		exit(99);
	}
	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);
	return (0);
}
