/**
 * _putchar - function to print a string on screen
 * _islower - fucntion that converts string to lower case
 * _isalpha - function check whether a character is a string
 * _abs - function that finds the absolute value of a number
 * _isupper - functinon that converts string to uper case
 * _isdigit - function that checks wheter a character is a number
 * _strlen - function that finds the length of a string
 * _puts - fucntion that prints a string
 * *_strcpy - fucntion that copy a string 
 * _atoi - fucntion converts a string to number
 * *_strcat - function that concatenate a string
 * *_strncat - fucntion that concatenate n strings
 * *_strncpy - function that copies n characters
 * _strcmp - function that compares two string
 * *_memset - function that puts bytes of string
 * *_memcpy - function that copy a string
 * *_strchr - fucntion that takes a character
 * _strspn - function for string pointer
 * *_strpbrk - fucntion for string
 * *_strstr - function for finding a string
 */
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

