/**
 * _strlen - function to find the length of a string
 * @s: string to be check
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
int lng;
lng = 0;
while (s[lng] != '\0')
{
lng += 1;
}
return (lng);
}
