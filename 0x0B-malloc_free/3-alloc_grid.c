#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates 2 dimension grid
 * @width: first dimension of the grid
 * @height: second dimension of the grid
 * Return: width and height grid
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **rect;
	int a, b;

	if (height <= 0 || width <= 0)
		return (NULL);

	rect = (int **) malloc(sizeof(int*) * height);

	if (rect == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		rect[a] = (int *) malloc(sizeof(int) * width);
		if (rect[a] == NULL)
		{
			free(rect);
			for (b = 0; b <= a; b++)
				free(rect[b]);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			rect[a][b] = 0;
		}
	}
	return (rect);
}
