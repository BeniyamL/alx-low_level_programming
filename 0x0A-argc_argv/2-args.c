#include <stdio.h>
/**
 * main - the begninig of the execution
 * @argc: the number of argument
 * @argv: the argument it self
 *
 * Return: always success
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int j;
	for(j = 0; j < argc; j++)
		printf("%s\n", argv[j]);
	return (0);
}
