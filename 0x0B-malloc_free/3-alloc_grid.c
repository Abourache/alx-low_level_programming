#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - function returns a pointer to a 2 dimensional array of integers
 * @width: colums.
 * @height: rows.
 * Return: Pointer to 2d array.
 */
int **alloc_grid(int width, int height)
{
	int a, b, i;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(sizeof(*arr) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			while (i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			arr[a][b] = 0;

	return (arr);
}
