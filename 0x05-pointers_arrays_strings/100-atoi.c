/**
 * _atoi - convert string to integer
 * @s: the string to be converted
 *
 * Return: the equivalent integer value
 */
int _atoi(char *s)
{
  int i, j, n, sign;
  i = 0;
  n = 0;
  sign = 1;
  while (s[i] != '\0')
    {
      i++;
    }
  for (j = 0; j < i; j++)
    {
      if (s[j] == '-')
	{
	  sign = sign * -1;
	}
      if (s[j] >= '0' && s[j] <= '9')
	{
	  n = (n * 10) + (s[j] - '0');
	}
      if (n != 0 && !(s[j] >= '0' && s[j] <= '9'))
	{
	  break;
	}
    }

  if (n == 0)
    {
      return (0);
    }
  else
    {
      return (sign * n);
    }
}
