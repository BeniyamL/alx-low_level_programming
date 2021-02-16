#include "holberton.h"
/**
 * rev_string - reverst the given string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
int i, k, j;
k = 0;
while (s[k] != '\0')
{
k++;
}
char str[k];
j = 0;
for (i = k; i > 0; i--)
{
str[j] = s[i - 1];
j++;
}
for (i = 0; i < k; i++)
{
s[i] = str[i];
}
}
