/**
 * _strcat - function to concatenate two strings
 * @dest: the first string
 * @src: the second string
 *
 * Return: the concatenation of the two strings
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] !=  '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
