#include "main.h"
#include <stdlib.h>

/**
*free_grid - free two dimensional grid
*@grid: string
*@height:string
*Return: void
*/
void free_grid(int **grid, int height)
{
	int a;

	if (grid != NULL || height != 0)
	{
		for (a = 0; a < height; a++)
		{
			free(grid[a]);
		}
		free(grid);
	}
}
