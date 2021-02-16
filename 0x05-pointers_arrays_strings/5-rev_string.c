#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/
void rev_string(char *s)
{
int i, k;
k = 0;
j = 0;
char str[2000]
while (s[k] != '\0')
{
k++;
}
for (; k > 0; k--)
{
str[j] = s[k - 1];
j++;
}
for (k; k < j; k++)
{
s[k] = str[k];
}
}
