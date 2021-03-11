#ifndef variadic_function_h
#define variadic_function_h
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
/**
 * struct selector - user datatype for selector
 * @sym: the given character
 * @fun: the pointer function
 **/
typedef struct selector
{
	char *sym;
	void (*fun)(va_list);
} type_print_all;
#endif
