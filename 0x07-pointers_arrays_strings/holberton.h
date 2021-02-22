/**
 * _putchar - function that prints character to stdout
 * _memset - function that filles n memory bytes with certain value
 * _memcpy - function that copy characters from source to destination
 * _strchr - function that search a character from a string
 * _strspn - function that finds the length of the matched character
 * _strpbrk - function that finds the first occurnace of a character
 * _strstr - functuin that finds first occurance of a substring
 * print_chessboard - function that prints a chess board
 * print_diagsums - function that finds sum of the diagonals of the matrix
 * set_string - set the value of a pointer to a value
 */
int _puthcar(char s);
char *_memset(char *s, char b,unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);
