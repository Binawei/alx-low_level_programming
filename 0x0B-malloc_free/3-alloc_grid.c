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
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	bin = malloc(sizeof(int *) * height);
	if (bin == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		if (bin[i] == NULL)
		{
			while (i >= 0)
			{
				free(bin);
				i--;
			}
			return (NULL);
		}
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
			bin[j][k] = 0;
	}
	return (bin);
}
