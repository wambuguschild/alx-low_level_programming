#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array ints
 * @width: width of the matrix
 * @height: height of the matrix
 * Return: if fails - NULL
 * Otherwise: pointer to the created matrix
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int h, w;

	if (height <= 0 || width <= 0)
		return (NULL);
	a = (int **) malloc(sizeof(int *) * height);

	if (a == NULL)
		return (NULL);

	for (h = 0; h < height; h++)
	{
		a[h] = (int *) malloc(sizeof(int) * width);
		if (a[h] == NULL)
		{
			free(a);
			for (w = 0; w <= h; w++)
				free(a[w]);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			a[h][w] = 0;
		}
	}
	return (a);
}
