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
	int **array;
	int a = 0, b;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	array = (int **) malloc(height * sizeof(int *));
	if (array != NULL)
	{
		for (; a < height; a++)
		{
			array[a] = (int *) malloc(width * sizeof(int));
			if (array[a] != NULL)
			{
				for (b = 0; b < width; b++)
				{
					array[a][b] = 0;
				}
			}
			else
			{
				while (a >= 0)
				{
					free(array[a]);
					a--;
				}
				free(array);
				return (NULL);
			}
		}
		return (array);
	}
	else
	{
		return (NULL);
	}
}
