/**
 * _putchar - functiioin to print the character to string
 * _memset - function fills memory with a constant byte
 * _memcpy -function to copy memory arias
 * _strchr - funcion to locate substring
 * _strspn - function to find length of a prefix substring
 * _strpbrk - function that searches a tring for any set of bytes
 * _strstr - function that locates a substring
 * print_chessboard - funtion that prints a chessbord
 * print_diagsums -function to finds the sum of the diagonals of a matrix
 * set_string - fucntion that sets value of a pointer to a char 
*/
int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

