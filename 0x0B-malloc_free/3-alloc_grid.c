#include "main.h"
/**
 * alloc_grid - allpcates space for a 2D array
 * @width: no of columns
 * @height: no of rows
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		ptr[i] = malloc(sizeof(int) * width);
	if (*ptr == NULL)
	{
		for (i = 0; i < height; i++)
			free(ptr[i]);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}
	return (ptr);
}
