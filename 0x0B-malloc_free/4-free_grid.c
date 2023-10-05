#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free the 2 dimensional array of int using alloc_grid
 * @height: type of integer height.
 * @grid: double pointer of type integer.
 * Return: Null if 0 or negative.
*/
void free_grid(int **grid, int height)
{
	int x;	

	x = 0;
	while (x < height)
	{
		free(grid[x]);
		x++;
	}
	free(grid);
}
