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
	int i, size = width * height;

	if (width == 0 || height == 0)
		return (NULL);
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		**ptr++ = 0;
	return (ptr);
}
