#include "function_pointers.h"
#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - function pointer to detrmine the operator
 * @s: the given operator
 *
 * Return: return the function to pointer
 **/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op != NULL &&  *(ops[i].op) == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
