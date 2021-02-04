#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alpha = 'a';
for (int i = 0; i < 10; i++)
{
putchar(i + '0');
}
while (alpha <= 'f')
{
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
