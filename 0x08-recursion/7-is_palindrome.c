#include "holberton.h"
int palindrome(char *s);
int _strlen(char *s);
/**
 * is_palindrome - function that check whether a string is palindrome
 * @s: the string to be checked
 *
 * Return: 1 if the string is a palindrome 0 otherwise
 */
int is_palindrome(char *s)
{
	if (!(*s))
		return (1);
	return (palindrome(s));
}
/**
 * palindrome - check whethter a string is a palindrome
 * @s: the given string
 *
 * Return: 1 is the string is palindrome 0 otherwise
 */
int palindrome(char *s)
{
	int len = _strlen(s) - 1;

	if (*s == s[len])
	{
		s++;
		len--;
	}
	else
	{
		return (0);
	}
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
