#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - 2D grid
 * @width: int width
 * @height: int height
 *
 * Return: 2d or NULL on failure.
 */

int **alloc_grid(int width, int height)
{
	int **a;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			while (i >= 0)
				free(a[i--]);
			free(a);
			return (NULL);
		}
	}

	return (a);
}