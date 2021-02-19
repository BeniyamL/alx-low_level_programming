/**
 * _putchar - functiioin to print the character to string
 * _strcat - function to concatenate two strings
 * _strncpy -function to copy n characters
 * _strcmp - funcion to compare a string
 * reverse_array - function to reverse a an array
 * string_toupper - function that convert string to upper case
 * cap_string - string that capitalize first character of a word
 * leet - funtion that encode a string
 * rot13 -function to encode a string using rot13
 * print_number - fucntion that prints number using putchar
 * infinte_add - function that adds two integers
 * ReduceTo100 - function that reduce numbers to multiple of 10 
*/
int _putchar(char c);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
char *leet(char *s);
char *rot13(char *s);
void print_number(int n);
void ReduceTo100(int n, char sign);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
