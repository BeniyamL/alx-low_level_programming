#include <unistd.h>
/**
 * _puts - write to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
write(1, &str[i], 1);
i++;
}
}
