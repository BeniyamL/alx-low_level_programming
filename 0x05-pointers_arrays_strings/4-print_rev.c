/**
 * print_rev - print the string in revers order
 * @s: string to be reversed
 */
void print_rev(char *s)
{
int i;
for (i = _strlen(s); i >= 0; i--)
{
_putchar(s[i]);
}
}
