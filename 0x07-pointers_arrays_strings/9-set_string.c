#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The original string.
 * @to: The character to be set.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
