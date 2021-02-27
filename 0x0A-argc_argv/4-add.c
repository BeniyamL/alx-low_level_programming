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
	int sum = 0;

	for (j = 1; j < argc; j++)
	{
		for (i = 0; argv[j][i]; i++)
		{
			if (argv[j][i] < '0' || argv[j][i] > '9')
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
