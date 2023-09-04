#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - allocate a 2d array
 * @width: the number of columns
 * @height: the number of rows
 * Return: the array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (height <= 0 || width <= 0)
		return (NULL);
	arr = (int **)malloc(width * height * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	free(arr);
	return (arr);
}
