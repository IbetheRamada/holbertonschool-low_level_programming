#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
*alloc_grid - function that return a pointer to a 2 dimensional array
*@width: a int that have a width
*@height: a int that have a height
*Return: Always (array) (success)
*/
int **alloc_grid(int width, int height)
{
	int **array = NULL;
	int i = 0, j = 0;

	if (width == 0 && height == 0)
	{
		return (NULL);
	}
	array = malloc(height * sizeof(*array));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{

		array[i] = malloc(width  * sizeof(*array[i]));

		free(array[i]);

		for (j = 0; j <= height; j++)
		{
		array[i][j] = 0;
		}

	}
	return (array);
}
