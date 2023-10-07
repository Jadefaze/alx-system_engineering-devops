#include <stdlib.h>

/**
 * alloc_grid - return a 2-D array of ints
 * @width: the width (number of element in each array)
 * @height: the number of arrays
 * Return: pointer to the 2-D array
 */

int **alloc_grid(int width, int height)
{
	int **array_2d, i, j, k;

	if (width <= 0 || height <= 0)
		return (NULL);

	array_2d = (int **)malloc(sizeof(int *) * height);
	if (!array_2d)
		return (NULL);

	for (k = 0; k < height; k++)
		array_2d[k] = (int *)malloc(sizeof(int) * width);

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array_2d[i][j] = 0;
		}
	}
	return (array_2d);
}
