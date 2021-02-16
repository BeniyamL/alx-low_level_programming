#include <unistd.h>
/**
 * _putchar - write character to stdout
 * reset_to_98 - rese to 98 using the address
 * swap_int - swap two integers
 * _strlen - find the length of a string
 * _puts - write a string on screen
 * print_rev - revers a string
 * rev_string - revers a sring using pointer
 * puts2 - printes a character at even postion
 * puts_half - prints half of a string
 * print_array - print an array of n elements
 * _strcpy - copy the source string to a destination
 */
int _putchar(char c);    
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *s);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
