#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees 2d array
 * @grid: the 2d array
 * @height: the number of rows
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
