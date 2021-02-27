#include <stdio.h>
#include <stdlib.h>
/**
 * main - the begninig of the execution
 * @argc: the number of argument
 * @argv: the argument it self
 *
 * Return: always success
 */
int main(int argc, char *argv[])
{
	int i, j;
	char *arg1 = argv[1];
	char *arg2 = argv[2];

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	i = atoi(arg1);
	j = atoi(arg2);
	printf("%d\n", i * j);
	return (0);
}
