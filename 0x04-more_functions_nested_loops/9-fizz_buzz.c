#include <stdio.h>
/**
 * main - print number 1-100 with Fizz and Buzz on condition
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 5 == 0) && (i % 3 == 0))
{
printf("%s ", "FizzBuzz");
}
else if (i % 3 == 0)
{
printf("%s ", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s ", "Buzz");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
