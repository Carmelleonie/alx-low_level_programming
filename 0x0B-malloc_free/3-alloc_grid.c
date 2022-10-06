#include "main.h"
#include <stdlib.h>

/**
*alloc_grid - pointer to a dimensional arrays
*@width: the wide
*@height: height
*Return: void
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	grid = (int **) malloc(height * sizeof(int *));
	if (grid != NULL)
	{
		for (a = 0; a < height; a++)
		{
			grid[a] = (int *) malloc(width * sizeof(int));
			if (grid[a] != NULL)
			{
				for (b = 0; b < width; b++)
				{
					grid[a][b] = 0;
				}
			}
			else
			{
				a = 0;
				while (a >= 0)
				{
					free(grid[a]);
					a--;
				}
				free(grid);
				return (NULL);
			}
		}
		return (grid);
	}
	else
	{
		return (NULL);
		free(grid);
	}
}
