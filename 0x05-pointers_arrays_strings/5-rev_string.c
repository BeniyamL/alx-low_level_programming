#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/
void rev_string(char *s)
{
int i, k, j;
k = 0;
char str[2000]
while (s[k] != '\0')
{
k++;
}
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
