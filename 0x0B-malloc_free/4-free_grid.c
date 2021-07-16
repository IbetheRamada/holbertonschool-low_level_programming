#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*free_grid - function that frees a 2 dimensional grid
*@grid: a int that have two grids
*@height: a int that have a height
*Return: Always (array) (success)
*/
void free_grid(int **grid, int height)
{
	int i = 0;
	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < heigth; i++)
	{
		free(grid[i]);
	}
	free(grid);
}