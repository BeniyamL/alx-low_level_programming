/**
 *_strcpy - copy string from src to dest
 * @src: the firt string
 * @dest: the copied string
 *
 * Return: string in destination
 */
char *_strcpy(char *dest, char *src)
{
  int i, j;
  i = 0;
  while (src[i] != '\0')
    {
      i++;
    }
  for (j = 0; j <= i; j++)
    {
      dest[j] = src[j];
    }

  return (dest);
}
