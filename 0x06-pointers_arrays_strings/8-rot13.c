#include "holberton.h"
/**
 * rot13 - function that encode string base on rotate 13 digit
 * @s: the string to be encoded
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	char ltr[] = {
	"NOPQRSTUVWXYZABCDEFGHIJKLM[\\]^_`nopqrstuvwxyzabcdefghijklm"
	};

	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'z')
			s[i] = ltr[s[i] - 'A'];
	}
	return (s);
}
