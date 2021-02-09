#include "holberton.h"
/**
 *print_alphabet_x10 -prints alphabet in lower case 10 tiems
 *
 * Description: alphabet must be written in lower case
 * Return: single aphabet in lower case
 */
void print_alphabet_x10(void)
{
char c;
int i;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
