#include "holberton.h"
int palindrome(char *s, int i, int l);
int _strlen(char *s);
/**
 * is_palindrome - function that check whether a string is palindrome
 * @s: the string to be checked
 *
 * Return: 1 if the string is a palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int l;

	if (!(*s))
		return (1);
	l = _strlen(s) - 1;
	return (palindrome(s, 0, l));
}
/**
 * palindrome - check whethter a string is a palindrome
 * @s: the given string
 * @i: the index
 * @len: the length of a string
 * Return: 1 is the string is palindrome 0 otherwise
 */
int palindrome(char *s, int i, int len)
{
	if (s[i] == s[len])
	{
		i++;
		len--;
		palindrome(s, i, len);
	}
	else
	{
		return (0);
	}
	if ((len / 2) <= 1)
		return (1);
}
/**
 * _strlen - find the length of a string
 * @s: the given string
 *
 * Return: the length of a string
 */
int _strlen(char *s)
{
	if (!(*s))
		return (0);
	s++;
	return (1 + _strlen(s));
}
