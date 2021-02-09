#include "holberton.h"
/**
 *print_alphabet -finds alphabet in lower case
 *
 * Description: alphabet must be written in lower case
 * Return: single aphabet in lower case
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
