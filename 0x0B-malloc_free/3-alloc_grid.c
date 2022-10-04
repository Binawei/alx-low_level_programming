#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - returns a pointer to
 * a 2 dimensional array of integers.
 * @width: the width of the grid
 * @height: the heigth of the grid
 * Return: a pointer to a 2 dimensional array of integers.
 * or NULL if it fails
 */
int **alloc_grid(int width, int height)
{
	int **bin;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	bin = malloc(sizeof(int *) * height);
	if (bin == NULL)
	{
		free(bin);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		bin[i] = malloc(width * sizeof(int));
		if (bin[i] == NULL)
		{
			for (j = 0; j <= i; j++)
			{
				free(bin[j]);
			}
			free(bin);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			bin[i][j] = 0;
		}
	}
	return (bin);
}
