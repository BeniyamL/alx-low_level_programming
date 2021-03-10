#include "function_pointers.h"
/**
 * print_name - function that print a name
 * @name: the name to be printed
 * @f:the pointer to function
 *
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
