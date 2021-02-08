#include <stdio.h>
#include "holberton.h"
/**
 * print_alphabet - function declaration
 */
void print_alphabet(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_alphabet();
return (0);
}

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
