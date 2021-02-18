#include "holberton.h"
/**
 * _strcmp - function to compare two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: return 0 on succsess
 */
int _strcmp(char *s1, char *s2)
{
	int j, k;

	k = 0;
	j = 0;
	while ((s1[j] != '\0') && (s2[j] != '\0'))
	{
		if (s1[j] != s2[j])
		{
			k = 1;
			return (s1[j] - s2[j]);
		}
		j++;
	}
	if (k == 0)
	{
		return (0);
	}
}
