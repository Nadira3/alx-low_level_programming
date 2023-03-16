#include "main.h"
/**
 * free_grid - frees memory allocated to a 2D array
 * @grid: pointer to 2D array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
