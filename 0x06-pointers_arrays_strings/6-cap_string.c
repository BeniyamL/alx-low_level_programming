#include "holberton.h"
/**
 * checkSeparator - function check whether the separatin character reachs
 * @c: the character to be check
 *
 * Return: 1 for separator 0 else
 */
int checkSeparator(char c)
{
	char *separator = " \t\n,;.!?\"(){}";
	int k;

	for (k = 0; separator[k] != '\0'; k++)
	{
		if (c == separator[k])
		{
			return (1);
		}
	}
	return (0);
}
/**
 * capitalize - convert a character to upper case
 * @c: the character to be capitalized
 *
 * Return: the capitalized character
 */
char capitalize(char *c)
{
	if (c[0] >= 97 && c[0] <= 122)
	{
		c[0] -= 32;
	}
	return (c[0]);
}
/**
 * cap_string - function that capitalize the first character of a word
 * @s: the string to be capitalized
 *
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i;

	i = 1;
	if (s[0] == '\0')
	{
		return (s);
	}
	capitalize(s);
	while (s[i] != '\0')
	{
		if (checkSeparator(s[i - 1]) == 1)
		{
			capitalize(&s[i]);
		}
		i++;
	}
	return (s);
}
