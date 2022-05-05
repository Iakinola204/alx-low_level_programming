#include "main.h"
/**
 * free_grid - main
 * @grid: main
 * @height: main
 * Return: main
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
