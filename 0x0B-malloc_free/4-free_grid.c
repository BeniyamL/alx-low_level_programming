#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - function that diallocate a memories of a grid
 * @height: the height of the array
 * @grid: the given two dimensional array
 *
 * Return:nothing
 **/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
