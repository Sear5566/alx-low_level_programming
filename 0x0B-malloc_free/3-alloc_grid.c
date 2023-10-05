#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 *2 dimensional array of int
 * @width: a type of integer.
 * @height: a type of integer.
 * Return: Null on failure or negative.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int x, y;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(sizeof(*grid) * height);
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		grid[x] = malloc(sizeof(**grid) * width);
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		y = 0;
		while (y < width)
		{
			grid[x][y] = 0;
			y++;
		}
	}
	return (grid);
}
