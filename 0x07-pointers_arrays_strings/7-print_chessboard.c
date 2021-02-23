#include <stdio.h>
#include "holberton.h"
/**
 * print_chessboard - function that print a chess boar
 * @a: the size of the aray
 * Return:nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}	
