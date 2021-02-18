#include "holberton.h"
/**
 * leet - function that encode a string
 * @s: the string to be encoded
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	char *replacedChar = "aAeEoOtTlL4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == replacedChar[j])
			{
				s[i] = replacedChar[j + 10];
			}
		}
	}
	return (s);
}
